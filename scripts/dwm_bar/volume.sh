#!/bin/bash

vol=$(pamixer --get-volume)

if [[ $vol -gt 60 ]]; then
  icon="󰕾"
elif [[ $vol -lt 50 && $vol -gt 30 ]]; then
  icon="󰖀"
else
  icon="󰖀"
fi

[[ $(pamixer --get-mute) == true ]] && icon="󰖁"

echo "$icon   $vol%"
