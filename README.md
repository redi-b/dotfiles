![screenshot](https://github.com/redi-b/dotfiles/blob/master/screenshots/new/screenshot.png)

# Softwares

- OS - [Arch Linux](https://archlinux.org)
- WM - [dwm](https://dwm.suckless.org)
- Compositor - [picom (picom-tyrone-git)](https://aur.archlinux.org/packages/picom-tryone-git/)
- Bar - [Polybar](https://github.com/polybar/polybar) with [polybar-themes](https://github.com/adi1090x/polybar-themes) (modified)
- Terminal - [st](https://st.suckless.org)
- Shell - [zsh](https://zsh.org)
- Lanucher - [dmenu](https://dwm.suckless.org) & [rofi](https://github.com/davatorium/rofi)
- Editor - [neovim](https://github.com/neovim/neovim)
- File Manager - [pcmanfm](https://wiki.archlinux.org/index.php/PCManFM)
- Clipboard Interface - [xclip](https://github.com/astrand/xclip)
- Screenshot - [scrot](https://github.com/resurrecting-open-source-projects/scrot)
- Notifications - [dunst](https://github.com/dunst-project/dunst)
- Music Player - [mocp](https://github.com/jonsafari/mocp)

---

# dwm patches

1. ```dwm-swapfocus```

https://dwm.suckless.org/patches/swapfocus/

2. ```dwm-actualfullscreen```

https://dwm.suckless.org/patches/actualfullscreen/

3. ```dwm-anybar``` (for polybar)

https://dwm.suckless.org/patches/anybar/

5. ```dwm-ewmhtags``` - workspace/desktop information (for polybar)

https://dwm.suckless.org/patches/ewmhtags/

6. ```dwm-movestack```

https://dwm.suckless.org/patches/movestack/

7. ```dwm-vanitygaps```

https://dwm.suckless.org/patches/vanitygaps/

---

# Some useful scripts

https://github.com/redi-b/dotfiles/tree/master/scripts

Add the directory to path to use them.

Add this line to your ```.bashrc``` or ```.zshrc``` and reopen terminal:

```bash
export PATH="/path/to/directory/:$PATH"
```
- NOTE: Some scripts are used in dwm (to run them with keyboard shortcuts).

## [```download_wall```](https://github.com/redi-b/dotfiles/tree/master/scripts/download_wall)

#### Description

Downloads a random wallpaper from unsplash. You can add or remove the keywords it searches for.

#### Dependencies

   - ```wget```   -  ```$ sudo pacman -S wget```


## [```emojipick```](https://github.com/redi-b/dotfiles/tree/master/scripts/emojipick)

#### Description

Launches an emojipicker. The launcher can be either rofi or dmenu
(```use_rofi=1``` or ```use_rofi=0```)  
[Screenshot](https://github.com/redi-b/dotfiles/blob/master/screenshots/new/emoji_launch.png)

#### Hotkey
   - ```Mod + Shift + e```

#### Dependencies

   - ```python3```   -  ```$ sudo pacman -S python3```
   - ```rofi```   -   ```$ sudo pacman -S rofi```
   - Save the [emojipicker](https://github.com/redi-b/dotfiles/tree/master/emojipicker) folder and save it in your home directory (or modify the script according to where you put this folder)

## [```ewwtoggle```](https://github.com/redi-b/dotfiles/tree/master/scripts/ewwtoggle)

#### Description

Toggles the eww widgets.  
[Screenshot](https://github.com/redi-b/dotfiles/blob/master/screenshots/new/widgets.png)

#### Hotkey
   - ```Mod + w```

#### Dependencies

   - <code>eww<sup>AUR</sup></code>

## [```manpdf```](https://github.com/redi-b/dotfiles/tree/master/scripts/manpdf)

#### Description
Launches a dmenu which opens the selected app's manual in zathura  
[Screenshot](https://github.com/redi-b/dotfiles/blob/master/screenshots/new/zathura.png)

#### Hotkey
   - ```Mod + v```

#### Dependencies
   
   - ```zathura```   -  ```$ sudo pacman -S zathura```
   - ```zathura-pdf-mupdf```  -  ```$ sudo pacman -S zathura-pdf-mupdf```
   - Update your manual database (which is used to run the ```apropos``` or ```man -k``` commands)

```bash
$ sudo mandb
```

## [```menulauncher```](https://github.com/redi-b/dotfiles/tree/master/scripts/menulauncher)

#### Description

Launches an application runner or system options.  
[Screenshot-1](https://github.com/redi-b/dotfiles/blob/master/screenshots/new/app_launch.png)  
[Screenshot-2](https://github.com/redi-b/dotfiles/blob/master/screenshots/new/sys_launch.png)

#### Hotkey
   - ```Mod + o``` - app launcher
   - ```Mod + r``` - powermenu

#### Arguments
   - ```launcher``` for app launcher
   - ```powermenu``` for powermenu
   - No argument defaults to ```launcher```

#### Dependencies

   - ```rofi```   -  ```$ sudo pacman -S rofi```
   - Save the [menulauncher](https://github.com/redi-b/dotfiles/tree/master/menulauncher) folder in your home directory (or modify the script according to where you put this folder)

## [```screenshot```](https://github.com/redi-b/dotfiles/tree/master/scripts/screenshot) & [```screencopy```](https://github.com/redi-b/dotfiles/tree/master/scripts/screencopy)

#### Description

Screenshot whole screen and copy the selected class to clipboard

#### Hotkey
   - ```Mod + Shift + p``` - screenshot
   - ```Mod + Shift + s``` - screencopy

#### Dependencies

   - ```scrot```  -  ```$ sudo pacman -S scrot```

## [```search_selected```](https://github.com/redi-b/dotfiles/tree/master/scripts/search_selected)

#### Description

Googles the selected text  
(Can be changed to used duckduckgo and also use a different browser)

#### Hotkey
   - ```Ctrl + Alt + s```

#### Dependencies

   - ```xclip``` -  ```$ sudo pacman -S xclip```


## [```searchpkg```](https://github.com/redi-b/dotfiles/tree/master/scripts/searchpkg)

#### Description

Used to search for a package and install the selected one  
[Screenshot](https://github.com/redi-b/dotfiles/blob/master/screenshots/new/searchpkg.png)

#### Arguments
   - ```pacman```
   - ```yay``` or ```paru``` to search from the <sup>AUR</sup>
   - No argument defaults to ```pacman```

#### Dependencies

   - ```fzf``` -  ```$ sudo pacman -S fzf```

   ```bash
   $ sudo pacman -Fy
   $ yay -Fy
   ```
   - NOTE: Only run these commands once


## [```setbg```](https://github.com/redi-b/dotfiles/tree/master/scripts/setbg)

#### Description

Sets a random background from the ```~/wallpapers``` directory

#### Dependencies

   - ```feh``` -  ```$ sudo pacman -S feh```


---

# Install zsh & oh-my-zsh

```bash
$ sudo pacman -S zsh
$ sh -c "$(curl -fsSL https://raw.githubusercontent.com/robbyrussell/oh-my-zsh/master/tools/install.sh)"
```

**Install zsh-auto-suggestions & zsh-syntax-highlighting (optional)**

```bash
$ git clone https://github.com/zsh-users/zsh-autosuggestions.git $ZSH_CUSTOM/plugins/zsh-autosuggestions
$ git clone https://github.com/zsh-users/zsh-syntax-highlighting.git $ZSH_CUSTOM/plugins/zsh-syntax-highlighting
```

**Logout and re-login to apply the changes**

---

# Install polybar

Get the <code>polybar<sup>AUR</sup></code> package (<code>polybar-dwm-module<sup>AUR</sup></code> for dwm)

```bash
$ yay -S polybar
```

You can install different themes if you don't want to configure you bar yourself

https://github.com/adi1090x/polybar-themes

There are steps on the github page above to install the themes. After installation you can edit your dwm/config.h to use polybar instead of the default one. Make sure you have installed the dwm-anybar patch.

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
