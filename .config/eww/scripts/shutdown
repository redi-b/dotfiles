#!/bin/bash

dir="~/menulauncher/rofi"

ex="\
Yes
No\
"

confirm_exit() {
	echo "$ex" | dmenu -l 2 -x 630 -y 300 -z 90 
}

ans=$(confirm_exit &)
echo $ans

if [[ $ans == "Yes" ]]; then
	notify-send "Shutting down..."
	ewwtoggle
	systemctl poweroff
else
	notify-send "Cancelled"
	exit 0
fi
