![screenshot](https://raw.githubusercontent.com/redi-b/dotfiles/master/screenshots/screenshot.png)


# Softwares

- OS - [Arch Linux](https://archlinux.org)
- WM - [dwm](https://dwm.suckless.org)
- Compositor - [picom (picom-tyrone-git)](https://aur.archlinux.org/packages/picom-tryone-git/)
- Terminal - [st](https://st.suckless.org)
- Shell - [zsh](https://zsh.org)
- Lanucher - [dmenu](https://dwm.suckless.org) & [rofi](https://github.com/davatorium/rofi)
- Editor - [neovim](https://github.com/neovim/neovim)
- File Manager - [ranger](https://github.com/ranger/ranger) - (cli) & [pcmanfm](https://wiki.archlinux.org/index.php/PCManFM) - (gui)
- Clipboard Interface - [xclip](https://github.com/astrand/xclip)
- Screenshot - [scrot](https://github.com/resurrecting-open-source-projects/scrot)
- Notifications - [dunst](https://github.com/dunst-project/dunst)
- Music Player - [mocp](https://github.com/jonsafari/mocp)

---

# dwm patches

1. ```dwm-vanitygaps```

https://dwm.suckless.org/patches/vanitygaps/

2. ```dwm-actualfullscreen```

https://dwm.suckless.org/patches/actualfullscreen/

3. ```dwm-movestack```

https://dwm.suckless.org/patches/movestack/

4. ```dwm-colorbar```

https://dwm.suckless.org/patches/colorbar/

5. ```dwm-anybar``` (optional)

https://dwm.suckless.org/patches/anybar/

6. ```dwm-ewmhtags``` - workspace/desktop information (optional)

https://dwm.suckless.org/patches/ewmhtags/

---
# Scripts

https://github.com/redi-b/dotfiles/tree/master/scripts

Add the directory to path to use them.

Add this line to your ```.bashrc``` or ```.zshrc``` and reopen terminal:

```bash
export PATH="/path/to/directory/:$PATH"
```
- NOTE: Some scripts are used in dwm (to run them with keyboard shortcuts).

<details>
   <summary><b>List of scripts</b></summary>

## [```download_wall```](https://github.com/redi-b/dotfiles/tree/master/scripts/download_wall)

#### Description

Downloads a random wallpaper from unsplash. You can add or remove the keywords it searches for.

#### Dependencies

   - ```wget```


## [```emojipick```](https://github.com/redi-b/dotfiles/tree/master/scripts/emojipick)

#### Description

Launches an emojipicker. The launcher can be either rofi or dmenu
(```use_rofi=1``` or ```use_rofi=0```)  
[Screenshot](https://github.com/redi-b/dotfiles/blob/master/screenshots/emoji_launch.png)

#### Hotkey
   - ```Mod + Shift + e```

#### Dependencies

   - ```python3```
   - ```rofi```
   - Save the [emojipicker](https://github.com/redi-b/dotfiles/tree/master/emojipicker) folder and save it in your home directory (or modify the script according to where you put this folder)

## [```ewwtoggle```](https://github.com/redi-b/dotfiles/tree/master/scripts/ewwtoggle)

#### Description

Toggles the eww widgets.  
[Screenshot](https://github.com/redi-b/dotfiles/blob/master/screenshots/widgets.png)

#### Hotkey
   - ```Mod + w```

#### Dependencies

   - <code>eww<sup>AUR</sup></code>

## [```manpdf```](https://github.com/redi-b/dotfiles/tree/master/scripts/manpdf)

#### Description
Launches a dmenu which opens the selected app's manual in zathura  
[Screenshot](https://github.com/redi-b/dotfiles/blob/master/screenshots/zathura.png)

#### Hotkey
   - ```Mod + v```

#### Dependencies

   - ```zathura```
   - ```zathura-pdf-mupdf```
   - Update your manual database (which is used to run the ```apropos``` or ```man -k``` commands)

   ```bash
   $ sudo mandb
   ```

## [```menulauncher```](https://github.com/redi-b/dotfiles/tree/master/scripts/menulauncher)

#### Description

Launches an application runner or system options.  
[Screenshot-1](https://github.com/redi-b/dotfiles/blob/master/screenshots/app_launch.png)  
[Screenshot-2](https://github.com/redi-b/dotfiles/blob/master/screenshots/sys_launch.png)

#### Hotkey
   - ```Mod + o``` - app launcher
   - ```Mod + r``` - powermenu

#### Arguments
   - ```launcher``` for app launcher
   - ```powermenu``` for powermenu
   - No argument defaults to ```launcher```

#### Dependencies

   - ```rofi```
   - Save the [menulauncher](https://github.com/redi-b/dotfiles/tree/master/menulauncher) folder in your home directory (or modify the script according to where you put this folder)

## [```screenshot```](https://github.com/redi-b/dotfiles/tree/master/scripts/screenshot) & [```screencopy```](https://github.com/redi-b/dotfiles/tree/master/scripts/screencopy)

#### Description

Screenshot whole screen and copy the selected class to clipboard

#### Hotkey
   - ```Mod + Shift + p``` - screenshot
   - ```Mod + Shift + s``` - screencopy

#### Dependencies

   - ```scrot```
   - ```imagemagick```

## [```search_selected```](https://github.com/redi-b/dotfiles/tree/master/scripts/search_selected)

#### Description

Googles the selected text  
(Browser and search engine can be changed)

#### Hotkey
   - ```Ctrl + Alt + s```

#### Dependencies

   - ```xclip```


## [```searchpkg```](https://github.com/redi-b/dotfiles/tree/master/scripts/searchpkg)

#### Description

Used to search for a package and install the selected one  
[Screenshot](https://github.com/redi-b/dotfiles/blob/master/screenshots/searchpkg.png)

#### Arguments
   - ```pacman```
   - ```yay``` or ```paru``` to search from the <sup>AUR</sup>
   - No argument defaults to ```pacman```

#### Dependencies

   - ```fzf```

   ```bash
   $ sudo pacman -Fy
   $ yay -Fy
   ```
   - NOTE: Only run these commands once


## [```setbg```](https://github.com/redi-b/dotfiles/tree/master/scripts/setbg)

#### Description

Sets a random background from the ```~/wallpapers``` directory

#### Dependencies

   - ```feh```

</details>
   
---

# Hotkeys

| Key               | Action        |  
| :-------------    | :----------   |
| ```Mod + Enter``` | Open Terminal |
| ```Mod + d```     | Run dmenu     |
| ```Mod + e```     | Open File Manager |
| ```Ctrl + Alt + s```     | Open notes (xpad) |
| ```Mod + o```     | Run applauncher |
| ```Mod + r```     | Run powermenu   |
| ```Mod + Shift + e```    | Run emojipicker   |
| ```Mod + v```     | Open a manual |
| ```Mod + Shift + l```    | Lockscreen        |
| ```Mod + Shift + p```    | Screenshot whole screen |
| ```Mod + Shift + s```    | Screenshot window or selection |
| ```Mod + w```     | Toggle eww widgets |
| ```Ctrl + Shift + s```   | Google selected text |

---

# Packages / Applications installed

<details>
<summary>It's a long list ;)</summary>

- ```alsa-utils``` 
- ```ark``` 
- ```breeze-icons``` 
- ```clang``` 
- ```cmake``` 
- ```cmatrix``` 
- ```cowsay``` 
- ```dunst``` 
- <code>eww-git<sup>AUR</sup></code>
- ```feh``` 
- ```figlet``` 
- ```fortune-mod``` 
- ```freedownloadmanager``` 
- ```fzf``` 
- <code>google-chrome<sup>AUR</sup></code>
- <code>kvantum-theme-qogir<sup>AUR</sup></code>
- ```lxappearance``` 
- ```maim``` 
- ```mpv``` 
- ```mtools``` 
- ```neofetch``` 
- ```neovim``` 
- ```nodejs``` 
- ```noto-fonts``` 
- ```npm``` 
- ```os-prober``` 
- ```pavucontrol``` 
- ```pcmanfm``` 
- <code>polybar<sup>AUR</sup></code>
- ```pulseaudio``` 
- ```python``` 
- ```python-pip``` 
- ```python-pynvim``` 
- <code>qogir-gtk-theme<sup>AUR</sup></code>
- ```qt5ct``` 
- ```rofi``` 
- ```rustup``` 
- <code>spotify<sup>AUR</sup></code>
- ```subversion``` 
- ```sxiv``` 
- <code>telegram-desktop<sup>AUR</sup></code>
- ```tmux``` 
- ```ttf-hack``` 
- ```vim``` 
- <code>visual-studio-code-bin<sup>AUR</sup></code>
- ```vlc``` 
- ```wget``` 
- ```xorg-xev``` 
- ```xorg-xinit``` 
- ```xorg-xmodmap``` 
- ```xorg-xprop``` 
- ```xorg-xrandr``` 
- <code>yay<sup>AUR</sup></code>
- ```zathura``` 
- ```zathura-pdf-mupdf``` 
- ```zsh``` 

</details>
<!-- https://user-images.githubusercontent.com/66169993/120075666-e8f0ca80-c0aa-11eb-84ab-3db62b4f442c.png -->
