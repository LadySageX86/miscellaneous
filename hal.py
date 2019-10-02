#wolfram, wiki, pyttsx3 and wx need to be installed with pip if you don't already have them
import wolframalpha
import wikipedia
import wx
import ssl
import pyttsx3

engine = pyttsx3.init()

en_voice_id = "HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Speech\Voices\Tokens\eSpeak_2"

engine.setProperty('rate', 100)
engine.setProperty('volume', 0.9)
engine.setProperty('voice', en_voice_id)

engine.say("How about a game of chess?")
engine.runAndWait()

app_id = "HRJQXE-ULGXGVKE4T"
client = wolframalpha.Client(app_id)

#gui
class MyFrame(wx.Frame):
    def __init__(self):
        wx.Frame.__init__(self, None, pos=wx.DefaultPosition, size=wx.Size(450,100), style=wx.MINIMIZE_BOX | wx.SYSTEM_MENU | wx.CAPTION | wx.CLOSE_BOX | wx.CLIP_CHILDREN, title="Hal")
        panel = wx.Panel(self)
        my_sizer = wx.BoxSizer(wx.VERTICAL)
        lbl = wx.StaticText(panel, label="Hello, I am Hal. What can I do for you today?")
        my_sizer.Add(lbl, 0, wx.ALL, 5)
        self.txt = wx.TextCtrl(panel, style=wx.TE_PROCESS_ENTER, size=(400, 30))
        self.txt.SetFocus()
        self.txt.Bind(wx.EVT_TEXT_ENTER, self.OnEnter)
        my_sizer.Add(self.txt, 0, wx.ALL, 5)
        panel.SetSizer(my_sizer)
        self.Show()

    def OnEnter(self, event):
        question = self.txt.GetValue()
        try:
            #wolfram api
            res = client.query(question)
            answer = next(res.results).text
            print (answer)
            engine.say(answer)
            engine.runAndWait()
        except:
            #wikipedia api
            wikipedia.set_lang("en")
            if (len(question) > 10 and (question[0] == 'w' or question[0] == 'W')):
                question = question.split(" ")
                question = " ".join(question[2:])
            print (wikipedia.summary(question, sentences=2))
            engine.say(wikipedia.summary(question, sentences=2))
            engine.runAndWait()
if __name__ == "__main__":
    app = wx.App(True)
    frame = MyFrame()
    app.MainLoop()
