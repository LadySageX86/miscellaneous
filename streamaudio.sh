# Shell script for creating virtual microphone to stream audio in Discord and other programs
# Requires pulseaudio/pavucontrol
OUTPUT= #Your output sink
INPUT= #Your input source
pactl load-module module-null-sink sink_name=transmit
pacmd 'update-sink-proplist transmit device.description="Signals to Transmit"'
pacmd 'update-source-proplist transmit.monitor device.description="Monitor of Signals to Transmit"'
pactl load-module module-null-sink sink_name=combined
pacmd 'update-sink-proplist combined device.description="Transmit+Microphone Sink"'
pacmd 'update-source-proplist combined.monitor device.description="Transmit+Microphone"'
pactl load-module module-loopback source=$INPUT sink=combined
pactl load-module module-loopback source=transmit.monitor sink=combined
pactl load-module module-loopback source=transmit.monitor sink=$OUTPUT
pactl load-module module-remap-source master=combined.monitor source_name=combined-source

