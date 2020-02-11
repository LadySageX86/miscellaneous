# kopimi
from os import system, name

def color():
    _ = system('color 02') if name == 'nt' else 0
        
def clear():
    _ = system('cls') if name == 'nt' else system('clear')

def calc(x):
    f = open("gummy.txt","w+")

    flavGel = 12
    juice = 1
    unflavGel = 2.5
    honey = 0.25
    lemJuice = 6
    flavExtract = 0.5

    print ("%.2f ounces of flavored gelatin"%(flavGel*x))
    f.write("%.2f ounces of flavored gelatin"%(flavGel*x))
    print ("%.2f cups of juice"%(juice*x))
    f.write ("%.2f cups of juice"%(juice*x))
    if (x % 2 == 0):
        print ("%d ounces of unflavored gelatin"%(unflavGel*x))
        f.write("%d ounces of unflavored gelatin"%(unflavGel*x))
    else:
        print ("%.3f ounces of unflavored gelatin"%(unflavGel*x))
        f.write("%.3f ounces of unflavored gelatin"%(unflavGel*x))
    if (x % 4 == 0):
        if (x == 4):
            print ("%d cup of honey"%(honey*x))
            f.write("%d cup of honey"%(honey*x))
        else:
            print ("%d cups of honey"%(honey*x))
            f.write("%d cups of honey"%(honey*x))
    elif (x % 2 == 0):
        print ("%.1f cups of honey"%(honey*x))
        f.write("%.1f cups of honey"%(honey*x))
    else:
        print ("%.4f cups of honey"%(honey*x))
        f.write("%.4f cups of honey"%(honey*x))
    print ("%.2f tablespoons of lemon juice"%(lemJuice*x))
    f.write("%.2f tablespoons of lemon juice"%(lemJuice*x))
    if (x % 2 == 0):
        if (x == 2):
            print ("%d tablespoon of flavor extract"%(flavExtract*x))
            f.write("%d tablespoon of flavor extract"%(flavExtract*x))
        else:
            print("%d tablespoons of flavor extract"%(flavExtract*x))
            f.write("%d tablespoons of flavor extract"%(flavExtract*x))
    elif (x < 1):
        print ("%.3f tablespoons of flavor extract"%(flavExtract*x))
        f.write("%.3f tablespoons of flavor extract"%(flavExtract*x))
    else:
        print ("%.2f tablespoons of flavor extract"%(flavExtract*x))
        f.write("%.2f tablespoons of flavor extract"%(flavExtract*x))
    f.close

def main():
    color()
    while True:
        clear()
        x = input("How many batches of gummies?: ")
        x = float(x)
        calc(x)
        print()
        input("Press enter to calculate again...")

if __name__ == "__main__":    
		main()
