//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {

//#//  static const char *fonts[]          = { "JetBrainsMono Nerd Font:size=8:style=Bold" };

/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
  {"",  "volume", 1,  10},
  {"",  "clock",  60, 1},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "  ";
static unsigned int delimLen = 5;


//#// {"",  "cpubars",  1,  16}, 
//#//  {"",  "nettraf",  1,  16},
//#//  {"",  "inputmethod",  1,  16},  
