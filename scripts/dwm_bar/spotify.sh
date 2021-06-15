#!/bin/bash

playerctl metadata | grep -i "spotify" >/dev/null && echo $(playerctl metadata --format '{{ title }}')
