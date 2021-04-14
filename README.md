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

- ## **Apply dwm patches**

    Some parts or the whole patch may fail to apply, in that case you can manually apply them by checking which parts failed in the "filename.extenstion.rej" which will be created when you apply a patch according to the file.

    NOTE: Making backups of the files is recommended in case something gets messed up. You can just create a folder called backups and copy each file before applying a patch. And don't forget to manually apply the parts that failed, otherwise the patch will not work and it may also mess up your dwm setup. If you can't manage to apply the patch manually, simply restore the backup you made and run this command:

    ```bash
    $ sudo make install
    ```

    After saving the diff files make sure to copy them to the "dwm" folder.

    To apply a patch, run:

    ```bash
    $ patch < dwm-{remaining-filename}.diff
    $ sudo make install
    ```

    1. ```dwm-swapfocus```

        https://dwm.suckless.org/patches/swapfocus/

    2. ```dwm-actualfullscreen```

        https://dwm.suckless.org/patches/actualfullscreen/

    3. ```dwm-anybar``` - this is important if you plan to use a bar other than the default one

        https://dwm.suckless.org/patches/anybar/

    4. ```dwm-cyclelayouts```

        https://dwm.suckless.org/patches/cyclelayouts/

    5. ```dwm-ewmhtags``` - this is important to get information about workspace/desktop (especially when using a different bar)

        https://dwm.suckless.org/patches/ewmhtags/

    6. ```dwm-movestack```
  
        https://dwm.suckless.org/patches/movestack/

    7. ```dwm-fullgaps``` | ```dwm-fullgaps-toggle```

        https://dwm.suckless.org/patches/fullgaps/

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
