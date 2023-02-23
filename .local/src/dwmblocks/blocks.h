//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/				/*Command*/																						/*Update Interval*/   /*Update Signal*/
	{"",				"~/scripts/dwm_bar/wifi.sh",																		 1,						  0},
	{"",				"~/scripts/dwm_bar/sep.sh",																		   0,						  0},

	{"",				"~/scripts/dwm_bar/volume.sh",																	 1,						  0},
	{"",				"~/scripts/dwm_bar/sep.sh",																		   0,						  0},

	{"",    		"~/scripts/dwm_bar/battery.sh",							 			 							 1,         	  0},
	{"",				"~/scripts/dwm_bar/sep.sh",																		   0,						  0},

	{"",        "~/scripts/dwm_bar/date.sh",							   			 						  30,         	  0},
	{"",				"~/scripts/dwm_bar/sep.sh",																		   0,						  0},

	{"",				"~/scripts/dwm_bar/time.sh",	  																 1,						  0},
}; 

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 1;
