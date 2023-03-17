#!/bin/bash

source "/home/rediet/scripts/dwm_bar/color.sh"

conn=$(nmcli -t -f NAME c show --active | head -n 1)
conn_len=${#conn}
if [ $conn_len -gt 9 ]
then
    conn="${conn:0:6}..."
fi
wifi_icon="󰤨 "
nowifi_icon="󰤭 "

update() {
    sum=0
    for arg; do
        read -r i < "$arg"
        sum=$(( sum + i ))
    done
    cache=${XDG_CACHE_HOME:-$HOME/.cache}/${1##*/}
    [ -f "$cache" ] && read -r old < "$cache" || old=0
    printf %d\\n "$sum" > "$cache"
    printf %d\\n $(( sum - old ))
}

rx=$(update /sys/class/net/[ew]*/statistics/rx_bytes)

[[ -n $conn ]] && out=$(printf "$wifi_icon   $conn   󰇚 %4sB" $(numfmt --to=iec $rx)) || out=$(echo "$nowifi_icon   Offline")
echo "$bg   " "$out  "
