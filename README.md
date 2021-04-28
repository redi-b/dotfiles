# Setup

- ## Install zsh & oh-my-zsh

    ```bash
    $ sudo pacman -S zsh
    $ sh -c "$(curl -fsSL https://raw.githubusercontent.com/robbyrussell/oh-my-zsh/master/tools/install.sh)"
    ```

    - **Install zsh-auto-suggestions & zsh-syntax-highlighting (optional)**

        ```bash
        $ git clone https://github.com/zsh-users/zsh-autosuggestions.git $ZSH_CUSTOM/plugins/zsh-autosuggestions
        $ git clone https://github.com/zsh-users/zsh-syntax-highlighting.git $ZSH_CUSTOM/plugins/zsh-syntax-highlighting
        ```

    - **Copy .zshrc to your home directory**

        https://github.com/redi-b/dotfiles/tree/master/.config/zsh

    - **Logout and re-login to apply the changes**

---

- ## **dwm patches**

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

- ## **Some useful scripts**

    https://github.com/redi-b/dotfiles/tree/master/scripts

    Add the directory to path to use them.

    Add this line to your ```.bashrc``` or ```.zshrc``` and reopen terminal:

    ```bash
    export PATH="/path/to/directory/:$PATH"
    ```

    Replace with path of the directory containing the scripts.

    ### Dependencies

    - You need to download the [menulauncher](https://github.com/redi-b/dotfiles/tree/master/menulauncher) folder and save it in your home directory to use the ```menulauncher``` command
    - The ```searchpkg``` command uses ```fzf```

        ```bash
        $ sudo pacman -S fzf
        ```

---

- ## **Install polybar (optional)**

    Get the ```polybar``` package from AUR

    ```bash
    $ yay -S polybar
    ```

    You can install different themes if you don't want to configure you bar yourself

    https://github.com/adi1090x/polybar-themes

    There are steps on the github page above to install the themes. After installation you can edit your dwm/config.h to use polybar instead of the default one. Make sure you have installed the dwm-anybar patch.
  
---

- ## **Packages / Applications**
    
    - alsa-utils (pacman)
    - ark (pacman)
    - breeze-icons (pacman)
    - clang (pacman)
    - cmake (pacman)
    - cmatrix (pacman)
    - cowsay (pacman)
    - dunst (pacman)
    - eww-git (aur)
    - feh (pacman)
    - figlet (pacman)
    - fortune-mod (pacman)
    - freedownloadmanager (pacman)
    - fzf (pacman)
    - google-chrome (aur)
    - kvantum-theme-qogir (aur)
    - lxappearance (pacman)
    - maim (pacman)
    - mpv (pacman)
    - mtools (pacman)
    - neofetch (pacman)
    - neovim (pacman)
    - nodejs (pacman)
    - noto-fonts (pacman)
    - npm (pacman)
    - os-prober (pacman)
    - pavucontrol (pacman)
    - pcmanfm (pacman)
    - polybar (aur)
    - pulseaudio (pacman)
    - python (pacman)
    - python-pip (pacman)
    - python-pynvim (pacman)
    - qogir-gtk-theme (aur)
    - qt5ct (pacman)
    - rofi (pacman)
    - rustup (pacman)
    - spotify (aur)
    - subversion (pacman)
    - sxiv (pacman)
    - telegram-desktop (aur)
    - tmux (pacman)
    - ttf-hack (pacman)
    - vim 
    - visual-studio-code-bin (aur)
    - vlc (pacman)
    - wget (pacman)
    - xorg-xev (pacman)
    - xorg-xinit (pacman)
    - xorg-xmodmap (pacman)
    - xorg-xprop (pacman)
    - xorg-xrandr (pacman)
    - yay (aur)
    - zathura (pacman)
    - zathura-pdf-mupdf (pacman)
    - zsh (pacman)
