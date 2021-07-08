#!/bin/bash

bg="^b#7B1FA2^"

echo "$bg        $(cat /sys/class/power_supply/BAT0/capacity)%"
