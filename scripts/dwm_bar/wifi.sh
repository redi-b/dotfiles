#!/bin/bash

conn=$(iw wlan0 info | grep -Po '(?<=ssid ).*')
wifi_icon="󰤨"
nowifi_icon="󰤭"

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

[[ -n $conn ]] && printf "$wifi_icon   $conn   󰇚%4sB" $(numfmt --to=iec $rx) || echo "$nowifi_icon   Offline"
