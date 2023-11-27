#!/bin/zsh
#
# -----------------------------------------------------

# "/etc/systemd/system/suspend.timer"
# [Unit]
# Description=Suspend if user is idle
# 
# [Timer]
# OnCalendar=minutely
# 
# [Install]
# WantedBy=timers.target


# "/etc/systemd/system/suspend.service"
# [Unit]
# Description=Suspend if user is idle
# 
# [Service]
# User=rediet
# Environment="DISPLAY=:0"
# ExecStart=/home/rediet/scripts/suspend.sh
# 
# ---------------------------------------------------

initial_idle=$(xprintidle | bc)

echo "Initial idle:"
echo "$initial_idle"

# Dim the screen if there's been no X activity for more than 5 minutes and there's no sound playing
if [[ "$initial_idle" -gt 300000 ]] && [[ $(grep -r "RUNNING" /proc/asound | wc -l) -eq 0 ]]; then
  echo "Dimming screen"
  xcalib -co 80 -a

  idle=$(xprintidle | bc)
  # Keep looping if we're still idle
  while [[ "$idle" -gt 2000 ]]
  do
    idle=$(xprintidle | bc)

    # Lock 1 minute after screen dims
    if [ "$idle" -gt $(($initial_idle + 60000)) ];
    then
      echo "Locking"
      betterlockscreen -l
    fi
    sleep 0.1
  done

  # Reset the display contrast once user activity is detected
  xcalib -clear
fi
