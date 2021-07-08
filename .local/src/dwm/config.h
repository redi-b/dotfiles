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
static const int user_bh            = 20;        /* 0 means that dwm will calculate bar height, >= 1 means dwm will user_bh as bar height */
static const int usealtbar          = 0;        /* 1 means use non-dwm status bar */
static const char *altbarclass      = "Polybar"; /* Alternate bar class name */
static const char *altbarcmd        = ""; /* Alternate bar launch command */
// static const char *altbarcmd        = ". ~/.config/polybar/forest/launch.sh "; /* Alternate bar launch command */
static const char *fonts[]          = { "Product Sans:size=10", "Material Design Icons:size=10", "Hack Nerd Font:size=10" };
static const char dmenufont[]       = "Product Sans:size=10";

static char normbgcolor[]           = "#00594B";
static char normbordercolor[]       = "#444444";
static char normfgcolor[]           = "#bbbbbb";
static char selfgcolor[]            = "#eeeeee";
static char selbordercolor[]        = "#00796B";
static char selbgcolor[]            = "#005577";


// static const char status_bg[]       = "#00796B";
// static const char seltag_bg[]       = "#009688";
static const char status_bg[]       = "#00594B";
static const char seltag_bg[]       = "#00796B";

static const char *colors[][3]      = {
	/*               			fg         bg         border   */
  [SchemeNorm] 			= { normfgcolor, normbgcolor, normbordercolor },
  [SchemeSel]  			= { selfgcolor,  selbgcolor,  selbordercolor  },
	[SchemeStatus]    =	{ selfgcolor, status_bg, "#000000"  }, // Statusbar right {text,background,not used but cannot be empty}
	[SchemeTagsSel]   =	{ selfgcolor, seltag_bg, "#000000"  }, // Tagbar left selected {text,background,not used but cannot be empty}
  [SchemeTagsNorm]  = { normfgcolor, status_bg, "#000000"  }, // Tagbar left unselected {text,background,not used but cannot be empty}
  [SchemeInfoSel]   =	{ selfgcolor, status_bg, "#000000"  }, // infobar middle  selected {text,background,not used but cannot be empty}
  [SchemeInfoNorm]  = { normfgcolor, status_bg, "#000000"  }, // infobar middle  unselected {text,background,not used but cannot be empty}
};

/* tagging */
static const char *tags[] = { "󰅬", "󰈹", "󰓇", "󰅴", "󰔁", "󰨞", "󰥔", "󰣇", "󰣇" };
static const Rule rules[] = {
	/* xprop(1):
	 *	WM_CLASS(STRING) = instance, class
	 *	WM_NAME(STRING) = title
	 */
	/* class      instance    title       tags mask     isfloating   monitor */
	{ "Gimp",     NULL,       NULL,       0,            1,           -1 },
	{ "Firefox",  NULL,       NULL,       1 << 2,            0,           -1 },
	{ "Spotify",  NULL,       NULL,       1 << 3,            0,           -1 },
	{ "xpad",     NULL,       NULL,       0,            1,           -1 },
};

/* layout(s) */
static const float mfact     = 0.5; /* factor of master area size [0.05..0.95] */
static const int nmaster     = 1;    /* number of clients in master area */
static const int resizehints = 1;    /* 1 means respect size hints in tiled resizals */

#define FORCE_VSPLIT 1  /* nrowgrid layout: force two clients to always split vertically */
#include "vanitygaps.c"

static const Layout layouts[] = {
	/* symbol     arrange function */
	{ "[ ] =",      tile },    /* first entry is default */
	{ "[M]",      monocle },
	{ "[@]",      spiral },
	{ "[\\]",     dwindle },
	{ "H[]",      deck },
	{ "TTT",      bstack },
	{ "===",      bstackhoriz },
	{ "HHH",      grid },
	{ "###",      nrowgrid },
	{ "---",      horizgrid },
	{ ":::",      gaplessgrid },
	{ "|M|",      centeredmaster },
	{ ">M>",      centeredfloatingmaster },
	{ "><>",      NULL },    /* no layout function means floating behavior */{ NULL,       NULL },
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
static const char *dmenucmd[] = { "dmenu_run", "-x", "380", "-y", "180", "-z", "600", "-l", "18", "-h", "22", "-m", dmenumon, "-fn", dmenufont, "-nb", "#00594B", "-nf", normfgcolor, "-sb", "#009688", "-sf", selfgcolor, NULL };
static const char *termcmd[]  = { "st", NULL };
static const char *layoutmenu_cmd = ". ~/.local/src/dwm/layoutmenu.sh";
static const char *fmcmd[]  	= { "pcmanfm", NULL };	// File manager
static const char *notecmd[] 	= { "xpad", NULL };		// Notepad

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

	{ MODKEY,                       XK_o,      spawn,          SHCMD("menulauncher") },
	{ MODKEY,                       XK_r,      spawn,          SHCMD("menulauncher powermenu") },
	{ MODKEY|ShiftMask,             XK_m,      spawn,          SHCMD("unmuteh") },
	{ MODKEY|ShiftMask,             XK_e,      spawn,          SHCMD("emojipick") },
	{ MODKEY,                       XK_v,      spawn,          SHCMD("manpdf") },
	{ MODKEY|ShiftMask,             XK_l,      spawn,          SHCMD("betterlockscreen -l") },
	{ MODKEY|ShiftMask,             XK_p,      spawn,          SHCMD("screenshot") },
	{ MODKEY|ShiftMask,             XK_s,      spawn,          SHCMD("screenshot_s") },
	{ MODKEY,                       XK_w,      spawn,          SHCMD("ewwtoggle") },
	{ ControlMask|ShiftMask,        XK_s,      spawn,          SHCMD("search_selected") },

	// Volume and media control
	{ 0,                            XF86XK_AudioLowerVolume, spawn, SHCMD(". ~/scripts/dwm/vol down") },
	{ 0,                            XF86XK_AudioRaiseVolume, spawn, SHCMD(". ~/scripts/dwm/vol up") },
	{ 0,                            XF86XK_AudioMute,        spawn, SHCMD(". ~/scripts/dwm/vol mute") },
	{ 0,                            XF86XK_AudioPlay,        spawn, SHCMD("playerctl play-pause") },
	{ 0,                            XF86XK_AudioNext,        spawn, SHCMD("playerctl next") },
	{ 0,                            XF86XK_AudioPrev,        spawn, SHCMD("playerctl previous") },

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
	{ MODKEY|ControlMask,           XK_m,      setlayout,      {.v = &layouts[11]} }, // Centered master
	{ MODKEY|ControlMask,						XK_comma,  cyclelayout,    {.i = -1 } },
	{ MODKEY|ControlMask,           XK_period, cyclelayout,    {.i = +1 } },
	{ MODKEY,                       XK_space,  setlayout,      {0} },
	{ MODKEY|ShiftMask,             XK_space,  togglefloating, {0} },
	{ MODKEY,                       XK_f,      togglefullscr,  {0} },
	{ MODKEY,                       XK_0,      view,           {.ui = ~0 } },
	{ MODKEY|ShiftMask,             XK_0,      tag,            {.ui = ~0 } },
	{ MODKEY,                       XK_comma,  focusmon,       {.i = -1 } },
	{ MODKEY,                       XK_period, focusmon,       {.i = +1 } },
	{ MODKEY|ShiftMask,             XK_comma,  tagmon,         {.i = -1 } },
	{ MODKEY|ShiftMask,             XK_period, tagmon,         {.i = +1 } },
	TAGKEYS(                        XK_1,                      0)
	TAGKEYS(                        XK_2,                      1)
	TAGKEYS(                        XK_3,                      2)
	TAGKEYS(                        XK_4,                      3)
	TAGKEYS(                        XK_5,                      4)
	TAGKEYS(                        XK_6,                      5)
	TAGKEYS(                        XK_7,                      6)
	TAGKEYS(                        XK_8,                      7)
	TAGKEYS(                        XK_9,                      8)
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

