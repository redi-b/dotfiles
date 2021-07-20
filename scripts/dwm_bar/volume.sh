#!/bin/bash

bg="^b#E64A19^"
vol=$(pamixer --get-volume)

if [[ $vol -gt 60 ]]; then
  icon="󰕾"
elif [[ $vol -lt 61 && $vol -gt 15 ]]; then
  icon="󰖀 "
else
  icon="󰕿 "
fi

[[ $(pamixer --get-mute) == true ]] && icon="󰖁"

echo "$bg   $icon  $vol%"
