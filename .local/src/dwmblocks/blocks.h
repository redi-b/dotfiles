//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/				/*Command*/																						/*Update Interval*/   /*Update Signal*/
	// {"  󰓇 ", 		"~/scripts/dwm_bar/spotify.sh || echo 'Not running'",						 5,							0},
	{"",				"~/scripts/dwm_bar/wifi.sh",																		 1,						  0},
	{"",				"~/scripts/dwm_bar/volume.sh",																	 1,						  0},
	{"   ",    "~/scripts/dwm_bar/battery.sh",										 							20,         	  0},
	{"󰃭   ",    "date '+%A %B %d,  %Y'",						     												30,         	  0},
	{"󰥔   ",   	"date '+%I:%M %P' ",																						 1,							0}
}; 

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "    |    ";
static unsigned int delimLen = 10;
