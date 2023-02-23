#!/bin/bash

source "/home/rediet/scripts/dwm_bar/color.sh"

vol=$(pamixer --get-volume)

# if [[ $vol -gt 60 ]]; then
  # icon="󰕾"
# elif [[ $vol -lt 61 && $vol -gt 15 ]]; then
  # icon="󰖀 "
# else
  # icon="󰕿 "
# fi

icon="󰕾 "

[[ $(pamixer --get-mute) == true ]] && icon="󰖁"

echo "$bg  $icon  $vol%  "
