" auto-install vim-plug
if empty(glob('~/.config/nvim/autoload/plug.vim'))
  silent !curl -fLo ~/.config/nvim/autoload/plug.vim --create-dirs
    \ https://raw.githubusercontent.com/junegunn/vim-plug/master/plug.vim
  "autocmd VimEnter * PlugInstall
  "autocmd VimEnter * PlugInstall | source $MYVIMRC
endif

call plug#begin('~/.config/nvim/autoload/plugged')

    " Better Syntax Support
    Plug 'sheerun/vim-polyglot'
    " File Explorer
    Plug 'scrooloose/NERDTree'
    " Auto pairs for '(' '[' '{'
    Plug 'jiangmiao/auto-pairs'
    " One-dark Theme
    Plug 'joshdick/onedark.vim'
    " Status Line
    Plug 'vim-airline/vim-airline'
    Plug 'vim-airline/vim-airline-themes'
    " Colorizer
    Plug 'norcalli/nvim-colorizer.lua'
    " Rainbow Parentheses
    Plug 'junegunn/rainbow_parentheses.vim'
    " vim-lsp
    Plug 'prabirshrestha/vim-lsp'
    Plug 'mattn/vim-lsp-settings'
    " Auto Complete (asynccomplete)
    Plug 'prabirshrestha/asyncomplete.vim'
    Plug 'prabirshrestha/asyncomplete-lsp.vim'
    " FZF
    Plug 'junegunn/fzf', { 'do': { -> fzf#install() } }
    Plug 'junegunn/fzf.vim'
    Plug 'airblade/vim-rooter'
    " Ranger
    Plug 'kevinhwang91/rnvimr', {'do': 'make sync'}
    " Commenter
    Plug 'preservim/nerdcommenter'
    " Tabnine auto completion
    " Plug 'codota/tabnine-vim'
    " Icons
    Plug 'ryanoasis/vim-devicons'
    " C++
    Plug 'octol/vim-cpp-enhanced-highlight'
    Plug 'rhysd/vim-clang-format'
    Plug 'derekwyatt/vim-fswitch'


call plug#end()
