#!/bin/sh

cat <<EOF | xmenu
[  ] =      Tiled 	0
[M]        Monocle 	1
[@]        Spiral 	2
[\\\\]        Dwindle 	3
H[  ]       Deck 	4
[TTT]     Bottom Stack 	5
[===]    B.S Horizontal 	6
[HHH]   Grid 	7
[###]    Row Grid 	8
[---]      Horizontal Grid 	9
[ : : : ]     Gapless Grid 	10
|M|         Centered Master 	11
>M>      Centered F. Master 	12
><>        Floating 	13
EOF
