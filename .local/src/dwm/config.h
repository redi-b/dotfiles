/* See LICENSE file for copyright and license details. */

/* appearance */
static const unsigned int borderpx  = 1;        /* border pixel of windows */
static const unsigned int snap      = 32;       /* snap pixel */
static const unsigned int gappih    = 9;       /* horiz inner gap between windows */
static const unsigned int gappiv    = 9;       /* vert inner gap between windows */
static const unsigned int gappoh    = 9;       /* horiz outer gap between windows and screen edge */
static const unsigned int gappov    = 9;       /* vert outer gap between windows and screen edge */
static       int smartgaps          = 0;        /* 1 means no outer gap when there is only one window */
static const int showbar            = 1;        /* 0 means no bar */
static const int topbar             = 1;        /* 0 means bottom bar */
static const int user_bh            = 30;        /* 0 means that dwm will calculate bar height, >= 1 means dwm will user_bh as bar height */
static const int usealtbar          = 0;        /* 1 means use non-dwm status bar */
static const char *altbarclass      = "Polybar"; /* Alternate bar class name */
static const char *altbarcmd        = ""; /* Alternate bar launch command */
static const char *fonts[]          = { "Product Sans:size=10", "Material Design Icons:size=10", "Hack Nerd Font:size=12", "Apple Color Emoji:size=10" };
static const char dmenufont[]       = "Product Sans:size=10";

// static char normbgcolor[]           = "#00594B";
// static char normbordercolor[]       = "#444444";
// static char normfgcolor[]           = "#eeeeee";
// static char selfgcolor[]            = "#eeeeee";
// static char selbordercolor[]        = "#00796B";
// static char selbgcolor[]            = "#005577";
// static char seltag_bg[]             = "#00796B";

static char normbgcolor[]           = "#222f3e";
static char normbordercolor[]       = "#444444";
static char normfgcolor[]           = "#eeeeee";
static char selfgcolor[]            = "#eeeeee";
static char selbordercolor[]        = "#108de6";
static char selbgcolor[]            = "#005577";
static char seltag_bg[]             = "#108de6";

static const char *colors[][3]      = {
	/*               			fg         bg         border   */
  [SchemeNorm] 			= { normfgcolor, normbgcolor, normbordercolor },
  [SchemeSel]  			= { selfgcolor,  selbgcolor,  selbordercolor  },
	[SchemeStatus]    =	{ selfgcolor,  normbgcolor, "#000000"  }, // Statusbar right {text,background,not used but cannot be empty}
	[SchemeTagsSel]   =	{ selfgcolor,  seltag_bg,   "#000000"  }, // Tagbar left selected {text,background,not used but cannot be empty}
  [SchemeTagsNorm]  = { normfgcolor, normbgcolor, "#000000"  }, // Tagbar left unselected {text,background,not used but cannot be empty}
  [SchemeInfoSel]   =	{ selfgcolor,  normbgcolor, "#000000"  }, // infobar middle  selected {text,background,not used but cannot be empty}
  [SchemeInfoNorm]  = { normfgcolor, normbgcolor, "#000000"  }, // infobar middle  unselected {text,background,not used but cannot be empty}
};

/* tagging */
static const char *tags[] = { " ", "󰖟 ", " ", " ", " ", " ", " ", " ", " " }; 	// nerd fonts
// static const char *tags[] = { "󰅬", "󰈹", "󰓇", "󰅴", "󰔁", "󰨞", "󰥔", "󰣇", "󰣇" }; 	// material design icons
static const char *tagsalt[] = { "1", "2", "3", "4", "5", "6", "7", "8", "9" };

static const char *tagsel[][2] = {
	{ "#ff6b6b", normbgcolor},
	{ "#0abde3", normbgcolor},
	{ "#009432", normbgcolor},
	{ "#55efc4", normbgcolor},
	{ "#1289A7", normbgcolor},
	{ "#f7d794", normbgcolor},
	// { "#4a69bd", normbgcolor},
	{ "#388E3C", normbgcolor},
	{ "#7f8c8d", normbgcolor},
	{ "#1B9CFC", normbgcolor},
};

// static const char *tagsel[][2] = {
// 	{ selfgcolor, normbgcolor},
// 	{ selfgcolor, normbgcolor},
// 	{ selfgcolor, normbgcolor},
// 	{ selfgcolor, normbgcolor},
// 	{ selfgcolor, normbgcolor},
// 	{ selfgcolor, normbgcolor},
// 	{ selfgcolor, normbgcolor},
// 	{ selfgcolor, normbgcolor},
// 	{ selfgcolor, normbgcolor},
// };
//
static const Rule rules[] = {
	/* xprop(1):
	 *	WM_CLASS(STRING) = instance, class
	 *	WM_NAME(STRING) = title
	 */
	/* class      												instance    title       tags mask		iscentered 		isfloating   monitor */
	{ "Gimp",     													NULL,       NULL,       0,            1,						1,           -1 },
	{ "firefox",  													NULL,       NULL,       1 << 1,       0,						0,           -1 },
	{ "Google-chrome",  										NULL,       NULL,       1 << 1,       0,						0,           -1 },
	{ "Spotify",  													NULL,       NULL,       1 << 2,       0,						0,           -1 },
	{ "xpad",     													NULL,       NULL,       0,            1,						1,           -1 },
	{ "kcalc",     													NULL,       NULL,       0,            1,						1,           -1 },
	{ "mpv",     										  			NULL,       NULL,       0,            1,						1,           -1 },
	{ "Windscribe",     										NULL,       NULL,       0,            1,						1,           -1 },
	{ "Protonvpn",     										  NULL,       NULL,       0,            1,						1,           -1 },
	{ "TelegramDesktop",     							  NULL,       NULL,       1 << 4,       1,						1,           -1 },
	{ "deepin-camera", 									    NULL,       NULL,       0,            1,						1,           -1 },
	{ "lxqt-openssh-askpass",						    NULL,       NULL,       0,            1,						1,           -1 },
	{ "org.gnome.clocks",   						    NULL,       NULL,       0,            1,						1,           -1 },
	{ "com.github.sgpthomas.hourglass",     NULL,       NULL,       0,            1,						1,           -1 },

};

/* layout(s) */
static const float mfact     = 0.5; /* factor of master area size [0.05..0.95] */
static const int nmaster     = 1;    /* number of clients in master area */
static const int resizehints = 1;    /* 1 means respect size hints in tiled resizals */

#define FORCE_VSPLIT 1  /* nrowgrid layout: force two clients to always split vertically */
#include "vanitygaps.c"

static const Layout layouts[] = {
	/* symbol     arrange function */
	{ " |     ",      tile },    /* first entry is default */
	{ " |     ",      monocle },
	{ " |    侀",      spiral },
	{ " |    﩯 ",      grid },
	{ " |    全",      nrowgrid },
	{ " |    頻",      centeredmaster },
	{ " |    恵",      centeredfloatingmaster },
	{ " |    缾",      NULL },    /* no layout function means floating behavior */
	{ NULL,          NULL },
};

/* key definitions */
#define MODKEY Mod4Mask
#define TAGKEYS(KEY,TAG) \
	{ MODKEY,                       KEY,      view,           {.ui = 1 << TAG} }, \
	{ MODKEY|ControlMask,           KEY,      toggleview,     {.ui = 1 << TAG} }, \
	{ MODKEY|ShiftMask,             KEY,      tag,            {.ui = 1 << TAG} }, \
	{ MODKEY|ControlMask|ShiftMask, KEY,      toggletag,      {.ui = 1 << TAG} },

/* helper for spawning shell commands in the pre dwm-5.0 fashion */
#define SHCMD(cmd) { .v = (const char*[]){ "/bin/sh", "-c", cmd, NULL } }

/* commands */
static char dmenumon[2] = "0"; /* component of dmenucmd, manipulated in spawn() */
static const char *dmenucmd[] = { "dmenu_run", "-c", "-z", "600", "-l", "18", "-h", "22", "-m", dmenumon, "-fn", dmenufont, "-nb", normbgcolor, "-nf", normfgcolor, "-sb", selbgcolor, "-sf", selfgcolor, NULL };
static const char *termcmd[]  = { "st", NULL };
static const char *layoutmenu_cmd = ". ~/.local/src/dwm/layoutmenu.sh";
static const char *fmcmd[]  	= { "thunar", NULL };	// File manager
static const char *notecmd[] 	= { "xpad", "-n", NULL };		// Notepad

#include "movestack.c"
#include <X11/XF86keysym.h>
static Key keys[] = {
	/* modifier                     key        function        argument */

	// Applications and scripts
	{ MODKEY,                       XK_d,      spawn,          {.v = dmenucmd } },
	{ MODKEY,                       XK_Return, spawn,          {.v = termcmd } },
	{ MODKEY,                       XK_e,      spawn,          {.v = fmcmd } },
	{ ControlMask|Mod1Mask,         XK_s,      spawn,          {.v = notecmd } },
	{ MODKEY|ShiftMask,	            XK_Tab,    spawn,          SHCMD("skippy-xd") },

	{ MODKEY|ShiftMask,             XK_m,      spawn,          SHCMD(". ~/scripts/unmuteh") },
	{ MODKEY,                       XK_x,      spawn,          SHCMD(". ~/scripts/manpdf") },
	{ MODKEY|ShiftMask,             XK_p,      spawn,          SHCMD(". ~/scripts/screenshot_w") },
	{ MODKEY|ShiftMask,             XK_s,      spawn,          SHCMD(". ~/scripts/screenshot_s") },
	{ ControlMask|ShiftMask,        XK_s,      spawn,          SHCMD(". ~/scripts/search_selected") },
	{ MODKEY|Mod1Mask,              XK_s,      spawn,          SHCMD(". ~/scripts/setbg") },
	{ MODKEY|Mod1Mask,              XK_r,      spawn,          SHCMD(". ~/scripts/recordscreen") },
	{ MODKEY|ShiftMask,             XK_b,      spawn,          SHCMD(". ~/scripts/dmenumount") },
	{ MODKEY|Mod1Mask,              XK_b,      spawn,          SHCMD(". ~/scripts/dmenuumount") },
	{ MODKEY,					              XK_z,      spawn,          SHCMD("networkmanager_dmenu") },
	{ MODKEY|ShiftMask,             XK_l,      spawn,          SHCMD("betterlockscreen -l") },

	// Launchers
	{ MODKEY,                       XK_o,      spawn,          SHCMD("rofi -no-config -no-lazy-grab -show drun -modi drun -theme ~/.config/rofi/launcher/applauncher.rasi") },
  { MODKEY,                       XK_r,      spawn,          SHCMD("powermenu") },
  { MODKEY,                       XK_v,      spawn,          SHCMD("clipboard") },
	{ MODKEY,                       XK_period, spawn,          SHCMD("rofi -modi emoji -show emoji -emoji-format '{emoji}' -emoji-file ~/.local/share/fonts/all_emojis.txt -theme ~/.config/rofi/launcher/emojilauncher.rasi") },

	// Volume, media and system controls
	{ 0,                            XF86XK_AudioLowerVolume,  spawn, SHCMD(". ~/scripts/dwm/vol down") },
	{ 0,                            XF86XK_AudioRaiseVolume,  spawn, SHCMD(". ~/scripts/dwm/vol up") },
	{ 0,                            XF86XK_AudioMute,         spawn, SHCMD(". ~/scripts/dwm/vol mute") },
	{ 0,                            XF86XK_AudioPlay,         spawn, SHCMD("playerctl play-pause") },
	{ 0,                            XF86XK_AudioNext,         spawn, SHCMD("playerctl next") },
	{ 0,                            XF86XK_AudioPrev,         spawn, SHCMD("playerctl previous") },
	{ 0,                            XK_F7,                   spawn, SHCMD("playerctl play-pause") },
	{ 0,                            XK_F12,                   spawn, SHCMD("playerctl next") },
	{ 0,                            XK_F10,                   spawn, SHCMD("playerctl previous") },
	{ 0,                            XF86XK_MonBrightnessUp,   spawn, SHCMD(". ~/scripts/brightness up") },
	{ 0,                            XF86XK_MonBrightnessDown, spawn, SHCMD(". ~/scripts/brightness down") },
	{ 0,                            XF86XK_PowerOff,          spawn, SHCMD(". ~/scripts/menulauncher powermenu") },

	// Basic controls
	{ MODKEY,                       XK_b,      togglebar,      {0} },
	{ MODKEY,                       XK_j,      focusstack,     {.i = +1 } },
	{ MODKEY,                       XK_k,      focusstack,     {.i = -1 } },
	{ MODKEY,                       XK_i,      incnmaster,     {.i = +1 } },
	{ MODKEY,                       XK_p,      incnmaster,     {.i = -1 } },
	{ MODKEY,                       XK_h,      setmfact,       {.f = -0.05} },
	{ MODKEY,                       XK_l,      setmfact,       {.f = +0.05} },
	{ MODKEY|ShiftMask,             XK_j,      movestack,      {.i = +1 } },
	{ MODKEY|ShiftMask,             XK_k,      movestack,      {.i = -1 } },
	{ MODKEY|ShiftMask,             XK_Return, zoom,           {0} },
	{ MODKEY|Mod1Mask,              XK_u,      incrgaps,       {.i = +1 } },
	{ MODKEY|Mod1Mask|ShiftMask,    XK_u,      incrgaps,       {.i = -1 } },
	{ MODKEY|Mod1Mask,              XK_i,      incrigaps,      {.i = +1 } },
	{ MODKEY|Mod1Mask|ShiftMask,    XK_i,      incrigaps,      {.i = -1 } },
	{ MODKEY|Mod1Mask,              XK_o,      incrogaps,      {.i = +1 } },
	{ MODKEY|Mod1Mask|ShiftMask,    XK_o,      incrogaps,      {.i = -1 } },
	{ MODKEY|Mod1Mask,              XK_6,      incrihgaps,     {.i = +1 } },
	{ MODKEY|Mod1Mask|ShiftMask,    XK_6,      incrihgaps,     {.i = -1 } },
	{ MODKEY|Mod1Mask,              XK_7,      incrivgaps,     {.i = +1 } },
	{ MODKEY|Mod1Mask|ShiftMask,    XK_7,      incrivgaps,     {.i = -1 } },
	{ MODKEY|Mod1Mask,              XK_8,      incrohgaps,     {.i = +1 } },
	{ MODKEY|Mod1Mask|ShiftMask,    XK_8,      incrohgaps,     {.i = -1 } },
	{ MODKEY|Mod1Mask,              XK_9,      incrovgaps,     {.i = +1 } },
	{ MODKEY|Mod1Mask|ShiftMask,    XK_9,      incrovgaps,     {.i = -1 } },
	{ MODKEY|Mod1Mask,              XK_0,      togglegaps,     {0} },
	{ MODKEY|Mod1Mask|ShiftMask,    XK_0,      defaultgaps,    {0} },
	{ MODKEY,                       XK_Tab,    view,           {0} },
	{ MODKEY,                       XK_q,      killclient,     {0} },
	{ MODKEY,                       XK_t,      setlayout,      {.v = &layouts[0]} },
	{ MODKEY,                       XK_m,      setlayout,      {.v = &layouts[1]} },
	{ MODKEY|ShiftMask,             XK_f,      setlayout,      {.v = &layouts[2]} },
	{ MODKEY|ControlMask,           XK_m,      setlayout,      {.v = &layouts[5]} }, // Centered master
	{ MODKEY|ControlMask,						XK_comma,  cyclelayout,    {.i = -1 } },
	{ MODKEY|ControlMask,           XK_period, cyclelayout,    {.i = +1 } },
	{ MODKEY,                       XK_space,  setlayout,      {0} },
	{ MODKEY|ShiftMask,             XK_space,  togglefloating, {0} },
	{ MODKEY,                       XK_f,      togglefullscr,  {0} },
	{ MODKEY,                       XK_0,      view,           {.ui = ~0 } },
	{ MODKEY|ShiftMask,             XK_0,      tag,            {.ui = ~0 } },
	{ MODKEY,                       XK_comma,  focusmon,       {.i = -1 } },
	{ MODKEY|Mod1Mask,              XK_period, focusmon,       {.i = +1 } },
	{ MODKEY|ShiftMask,             XK_comma,  tagmon,         {.i = -1 } },
	{ MODKEY|ShiftMask,             XK_period, tagmon,         {.i = +1 } },
	{ MODKEY,                       XK_n,      togglealttag,   {0} },
	{ MODKEY,                       XK_s,      togglesticky,   {0} },
	TAGKEYS(                        XK_1,                      0)
	TAGKEYS(                        XK_2,                      1)
	TAGKEYS(                        XK_3,                      2)
	TAGKEYS(                        XK_4,                      3)
	TAGKEYS(                        XK_5,                      4)
	TAGKEYS(                        XK_6,                      5)
	TAGKEYS(                        XK_7,                      6)
	TAGKEYS(                        XK_8,                      7)
	TAGKEYS(                        XK_9,                      8)
	{ MODKEY|Mod1Mask,              XK_q,      spawn,          SHCMD("pkill x") },
	{ MODKEY|ShiftMask,             XK_q,      quit,           {0} },
};

/* button definitions */
/* click can be ClkTagBar, ClkLtSymbol, ClkStatusText, ClkWinTitle, ClkClientWin, or ClkRootWin */
static Button buttons[] = {
	/* click                event mask      button          function        argument */
	{ ClkLtSymbol,          0,              Button1,        setlayout,      {0} },
	{ ClkLtSymbol,          0,              Button3,        layoutmenu,     {0} },
	{ ClkWinTitle,          0,              Button2,        zoom,           {0} },
	{ ClkStatusText,        0,              Button2,        spawn,          {.v = termcmd } },
	{ ClkRootWin,           0,              Button3,        spawn,          SHCMD("rclkmenu") },
	{ ClkClientWin,         MODKEY,         Button1,        movemouse,      {0} },
	{ ClkClientWin,         MODKEY,         Button2,        togglefloating, {0} },
	{ ClkClientWin,         MODKEY,         Button3,        resizemouse,    {0} },
	{ ClkTagBar,            0,              Button1,        view,           {0} },
	{ ClkTagBar,            0,              Button3,        toggleview,     {0} },
	{ ClkTagBar,            MODKEY,         Button1,        tag,            {0} },
	{ ClkTagBar,            MODKEY,         Button3,        toggletag,      {0} },
};
