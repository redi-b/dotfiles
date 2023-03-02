![screenshot](https://raw.githubusercontent.com/redi-b/dotfiles/new/screenshots/screenshot.png)


# Softwares

- OS - [Arch Linux](https://archlinux.org)
- WM - [dwm](https://dwm.suckless.org)
- Compositor - [picom (picom-ibhagwan-git)](https://aur.archlinux.org/packages/picom-ibhagwan-git/)
- Terminal - [st](https://st.suckless.org)
- Shell - [zsh](https://zsh.org)
- Launcher - [dmenu](https://dwm.suckless.org) & [rofi](https://github.com/davatorium/rofi)
- Editor - [neovim](https://github.com/neovim/neovim)
- File Manager - [ranger](https://github.com/ranger/ranger) - (cli) & [pcmanfm](https://wiki.archlinux.org/index.php/PCManFM) - (gui)
- Clipboard Interface - [xclip](https://github.com/astrand/xclip)
- Screenshot - [scrot](https://github.com/resurrecting-open-source-projects/scrot)
- Notifications - [dunst](https://github.com/dunst-project/dunst)
- Music Player - [mocp](https://github.com/jonsafari/mocp)

### Main Fonts

- Product Sans
- Hack Nerd Font
- Material Design Icons

### Additional Programs and Dependencies

```bash
$ sudo pacman -S brightnessctl fzf iw lxsession maim ncdu neovim ntfs-3g pamixer pavucontrol playerctl qogir-gtk-theme rofi-emoji ueberzug xautolock xorg-xinput xpad zathura zathura-pdf-mupdf
$ yay -S betterlockscreen networkmanager-dmenu-git simple-mtpfs
```

<details>

   <summary><b>List of Programs</b></summary>
   <table>
      <tr>
         <td>bat</td>
         <td>lxsession</td>
         <td>playerctl</td>
         <td>sxiv</td>
      </tr>
      <tr>
         <td>betterlockscreen<sup>AUR</sup></td>
         <td>maim</td>
         <td>picom-ibhagwan-git<sup>AUR</sup></td>
         <td>ueberzug</td>
      </tr>
      <tr>
         <td>brightnessctl</td>
         <td>ncdu</td>
         <td>qogir-gtk-theme</td>
         <td>unzip</td>
      </tr>
      <tr>
         <td>dunst</td>
         <td>neovim</td>
         <td>ranger</td>
         <td>xautolock</td>
      </tr>
      <tr>
         <td>feh</td>
         <td>networkmanager-dmenu-git<sup>AUR</sup></td>
         <td>rofi</td>
         <td>xob<sup>AUR</sup></td>
      </tr>
      <tr>
         <td>ffmpegthumbnailer</td>
         <td>ntfs-3g</td>
         <td>rofi-emoji</td>
         <td>xorg-xinput</td>
      </tr>
      <tr>
         <td>fzf</td>
         <td>pamixer</td>
         <td>scrot</td>
         <td>xpad</td>
      </tr>
      <tr>
         <td>iw</td>
         <td>pavucontrol</td>
         <td>simple-mtpfs<sup>AUR</sup></td>
         <td>zathura</td>
      </tr>
      <tr>
         <td>kvantum-theme-qogir-git</td>
         <td>pcmanfm</td>
         <td>subversion</td>
         <td>zathura-pdf-mupdf</td>
      </tr>
   
   </table>

   <details>
      <summary><h4>Optional Programs/Applications</h4></summary>
   <table>
      <tr>
         <td>firefox</td>
         <td>spicetify</td>
         <td>vlc</td>
      </tr>
      <tr>
         <td>freedownloadmanager</td>
         <td>spotify</td>
      </tr>
      <tr>
         <td>google-chrome</td>
         <td>sublime-text-3</td>
      </tr>
      <tr>
         <td>kcalc</td>
         <td>sxiv</td>
      </tr>
      <tr>
         <td>kvantum</td>
         <td>telegram-desktop</td>
      </tr>
      <tr>
         <td>lxappearance</td>
         <td>tldr</td>
      </tr>
      <tr>
         <td>okular</td>
         <td>visual-studio-code-bin</td>
      </tr>
   </table>
   </details>

</details>


### dwm patches


- [actualfullscreen](https://dwm.suckless.org/patches/actualfullscreen/)
- [alternative-tags](https://dwm.suckless.org/patches/alternativetags/) (optional)
- [anybar](https://dwm.suckless.org/patches/anybar/) (optional)
- [bar-height](https://dwm.suckless.org/patches/bar_height/)
- [center](https://dwm.suckless.org/patches/center/)
- [colorbar](https://dwm.suckless.org/patches/colorbar/)
- [cyclelayouts](https://dwm.suckless.org/patches/cyclelayouts/)
- [ewmhtags](https://dwm.suckless.org/patches/ewmhtags/) - workspace/desktop information
- [focusonnetactive](https://dwm.suckless.org/patches/focusonnetactive/) - skippy-xd
- [layoutmenu](https://dwm.suckless.org/patches/layoutmenu/) - (depends on xmenu)
- [movestack](https://dwm.suckless.org/patches/movestack/)
- [status2d](https://dwm.suckless.org/patches/status2d/) - for colored text in bar 
- [sticky](https://dwm.suckless.org/patches/sticky/)
- [vanitygaps](https://dwm.suckless.org/patches/vanitygaps/)
- [warp](https://dwm.suckless.org/patches/warp/) - skippy-xd

---
# Scripts

https://github.com/redi-b/dotfiles/tree/new/scripts

Add the directory to path to use them.

Add this line to your ```.bashrc``` or ```.zshrc``` and reopen terminal:

```bash
export PATH="/path/to/directory/:$PATH"
```
- NOTE: Some scripts are used in dwm (to run them with keyboard shortcuts).

<details>
   <summary><b>List of scripts</b></summary>

## [```download_wall```](https://github.com/redi-b/dotfiles/tree/new/scripts/download_wall)

#### Description

Downloads a random wallpaper from unsplash. You can add or remove the keywords it searches for.

#### Dependencies

   - ```wget```


## [```emojipick```](https://github.com/redi-b/dotfiles/tree/new/scripts/emojipick)

#### Description

Launches an emojipicker. The launcher can be either rofi or dmenu
(```use_rofi=1``` or ```use_rofi=0```)  
[Screenshot](https://github.com/redi-b/dotfiles/blob/new/screenshots/emoji_launch.png)

#### Hotkey
   - ```Mod + Shift + e```

#### Dependencies

   - ```python3```
   - ```rofi```
   - Save the [emojipicker](https://github.com/redi-b/dotfiles/tree/new/emojipicker) folder and save it in your home directory (or modify the script according to where you put this folder)

## [```manpdf```](https://github.com/redi-b/dotfiles/tree/new/scripts/manpdf)

#### Description
Launches a dmenu which opens the selected app's manual in zathura  
[Screenshot](https://github.com/redi-b/dotfiles/blob/new/screenshots/zathura.png)

#### Hotkey
   - ```Mod + v```

#### Dependencies

   - ```zathura```
   - ```zathura-pdf-mupdf```
   - Update your manual database (which is used to run the ```apropos``` or ```man -k``` commands)

   ```bash
   $ sudo mandb
   ```

## [```menulauncher```](https://github.com/redi-b/dotfiles/tree/new/scripts/menulauncher)

#### Description

Launches an application runner or system options.  
[Screenshot-1](https://github.com/redi-b/dotfiles/blob/new/screenshots/app_launch.png)  
[Screenshot-2](https://github.com/redi-b/dotfiles/blob/new/screenshots/sys_launch.png)

#### Hotkey
   - ```Mod + o``` - app launcher
   - ```Mod + r``` - powermenu

#### Arguments
   - ```launcher``` for app launcher
   - ```powermenu``` for powermenu
   - No argument defaults to ```launcher```

#### Dependencies

   - ```rofi```
   - Save the [menulauncher](https://github.com/redi-b/dotfiles/tree/new/menulauncher) folder in your home directory (or modify the script according to where you put this folder)

## [```screenshot```](https://github.com/redi-b/dotfiles/tree/new/scripts/screenshot_w) & [```screencopy```](https://github.com/redi-b/dotfiles/tree/new/scripts/screenshot_s)

#### Description

Screenshot whole screen and copy the selected portion to clipboard

#### Hotkey
   - ```Mod + Shift + p``` - screenshot window 
   - ```Mod + Shift + s``` - copy to clipboard 

#### Dependencies

   - ```scrot```
   - ```imagemagick```

## [```search_selected```](https://github.com/redi-b/dotfiles/tree/new/scripts/search_selected)

#### Description

Googles the selected text  
(Browser and search engine can be changed)

#### Hotkey
   - ```Ctrl + Alt + s```

#### Dependencies

   - ```xclip```


## [```searchpkg```](https://github.com/redi-b/dotfiles/tree/new/scripts/searchpkg)

#### Description

Used to search for a package and install the selected one  
[Screenshot](https://github.com/redi-b/dotfiles/blob/new/screenshots/searchpkg.png)

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


## [```setbg```](https://github.com/redi-b/dotfiles/tree/new/scripts/setbg)

#### Description

Sets a random background from the ```~/wallpapers``` directory

#### Hotkey
   - ```Mod + Alt + s```

#### Dependencies

   - ```feh```

## [```network```](https://github.com/redi-b/dotfiles/tree/new/scripts/network)

#### Description

Sets a random background from the ```~/wallpapers``` directory

#### Hotkey
   - ```Mod + Alt + s```

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
| ```Ctrl + Alt + s```     | Open stickies (xpad) |
| ```Mod + Shift + Tab```     | Run task switcher (skippy-xd)  |
| ```Mod + o```     | Run applauncher |
| ```Mod + r```     | Run powermenu   |
| ```Mod + Shift + e```    | Run emojipicker   |
| ```Mod + v```     | Open a manual |
| ```Mod + Shift + l```    | Lockscreen        |
| ```Mod + Shift + p```    | Screenshot whole screen |
| ```Mod + Shift + s```    | Screenshot window or selection |
| ```Ctrl + Shift + s```   | Google selected text |

<!-- https://user-images.githubusercontent.com/66169993/120075666-e8f0ca80-c0aa-11eb-84ab-3db62b4f442c.png -->

