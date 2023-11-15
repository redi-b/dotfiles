#!/bin/bash

source "/home/rediet/scripts/dwm_bar/color.sh"

status="$(cat /sys/class/power_supply/BAT0/status)"

if [[ $status == "Discharging" ]];
then
  icon="󰁹"
else
  icon="󰂄"
fi

echo "$bg  $icon  $(cat /sys/class/power_supply/BAT0/capacity)%  "
