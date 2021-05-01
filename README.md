# Setup

## Install zsh & oh-my-zsh

   ```bash
   $ sudo pacman -S zsh
   $ sh -c "$(curl -fsSL https://raw.githubusercontent.com/robbyrussell/oh-my-zsh/master/tools/install.sh)"
   ```

   **Install zsh-auto-suggestions & zsh-syntax-highlighting (optional)**
   
   ```bash
   $ git clone https://github.com/zsh-users/zsh-autosuggestions.git $ZSH_CUSTOM/plugins/zsh-autosuggestions
   $ git clone https://github.com/zsh-users/zsh-syntax-highlighting.git $ZSH_CUSTOM/plugins/zsh-syntax-highlighting
   ```

   **Copy .zshrc to your home directory**

   https://github.com/redi-b/dotfiles/tree/master/.zshrc

   **Logout and re-login to apply the changes**

---

## dwm patches

1. ```dwm-swapfocus```

    https://dwm.suckless.org/patches/swapfocus/

2. ```dwm-actualfullscreen```

    https://dwm.suckless.org/patches/actualfullscreen/

3. ```dwm-anybar``` - this is important if you plan to use a bar other than the default one

    https://dwm.suckless.org/patches/anybar/

5. ```dwm-ewmhtags``` - this is important to get information about workspace/desktop (especially when using a different bar)

    https://dwm.suckless.org/patches/ewmhtags/

6. ```dwm-movestack```

    https://dwm.suckless.org/patches/movestack/

7. ```dwm-vanitygaps```

    https://dwm.suckless.org/patches/vanitygaps/

---

## Some useful scripts

https://github.com/redi-b/dotfiles/tree/master/scripts

Add the directory to path to use them.

Add this line to your ```.bashrc``` or ```.zshrc``` and reopen terminal:

```bash
export PATH="/path/to/directory/:$PATH"
```

   ### Dependencies

   - ```rofi``` is used by both [menulauncher](https://github.com/redi-b/dotfiles/tree/master/scripts/menulauncher) and [emojipick](https://github.com/redi-b/dotfiles/tree/master/scripts/emojipick)

   - You need to download the [menulauncher](https://github.com/redi-b/dotfiles/tree/master/menulauncher) folder and save it in your home directory to use the ```menulauncher``` command
   - You need to download the [emojipicker](https://github.com/redi-b/dotfiles/tree/master/emojipicker) folder and save it in your home directory to use the ```emojipick``` command
   - ```feh``` is used by [setbg](https://github.com/redi-b/dotfiles/tree/master/scripts/setbg) to set the wallpaper

   - ```fzf``` is used by [searchpkg](https://github.com/redi-b/dotfiles/tree/master/scripts/searchpkg) 

       ```bash
       $ sudo pacman -Fy
       $ yay -Fy
       ```
       - NOTE: Only run these commands once

   - ```maim``` is used by [maimcopy](https://github.com/redi-b/dotfiles/tree/master/scripts/maimcopy) and [maimsave](https://github.com/redi-b/dotfiles/tree/master/scripts/maimsave) to take screenshots
   - To use the [manpdf](https://github.com/redi-b/dotfiles/tree/master/scripts/manpdf) command you need to intall ```zathura``` and a pdf reader (```zathura-pdf-mupdf``` in this case). Then update your manual database ( which is used to run the ```apropos``` or ```man -k``` commands

       ```bash
       $ sudo mandb
       ```

---

## Install polybar (optional)

   Get the <code>polybar<sup>AUR</sup></code> package (<code>polybar-dwm-module<sup>AUR</sup></code> is preferred if you are using dwm)

   ```bash
   $ yay -S polybar
   ```

   You can install different themes if you don't want to configure you bar yourself

   https://github.com/adi1090x/polybar-themes

   There are steps on the github page above to install the themes. After installation you can edit your dwm/config.h to use polybar instead of the default one. Make sure you have installed the dwm-anybar patch.

---

## Packages / Applications
    
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
