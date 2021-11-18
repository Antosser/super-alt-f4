# Super alt f4
Some apps like Twitch don't fully close when you hit Alt+F4  
That's why I created this tool to "kill" the foreground window instantly using

## Usage
1. Download the lastest release of the program
1. Open the executable
1. Now you can force-close any program using `Ctrl Alt F4`

## Startup
If you want it to start at startup, copy the executable to `%userprofile%\AppData\Roaming\Microsoft\Windows\Start Menu\Programs\Startup`  

## Warning
The program does no check to see if you are focused on the desktop (explorer.exe) and if you press `Ctrl Alt F4` it will kill the desktop.  
To recover from that situation press `Ctrl Shift Esc` to open Task Manager.  
Then click "file" -> "Run New Task", type in explorer, and press enter.  
That should do it