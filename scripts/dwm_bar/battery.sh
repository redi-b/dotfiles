#!/bin/bash

bg="^b#8e44ad^"

echo "$bg        $(cat /sys/class/power_supply/BAT0/capacity)%"
