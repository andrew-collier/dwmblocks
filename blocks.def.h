static const Block blocks[] = {
//	"Icon"	"Command"		UpdateInt	UpdateSig
{	"",		"sb-music",		0,			11},
{   "",		"sb-weath",		900,	   	7},
{	"",		"sb-wifi",		5,			5},
{	"",		"sb-volume",	0,			10},
{	"",		"sb-battery",	1,			4},
{	"",		"sb-clock",		60,			1},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 5;
