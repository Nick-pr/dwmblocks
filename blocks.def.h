//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/

	{"Updates:", "~/.local/bin/scripts/dwmblocks/dwm-pacupdate.sh",		    60,		0},
	{"", "~/.local/bin/scripts/dwmblocks/dwm-timedate.sh",					1,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
