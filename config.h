/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nogroup";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#005577",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
};

/*Enable blur*/
#define BLUR
/*Set blur radius*/
static const int blurRadius=7;

// /*Enable Pixelation*/
// #define PIXELATION
// /*Set pixelation radius*/
// static const int pixelSize=0;

/*Enable Pixelation*/
#define PIXELATION
/*Set pixelation radius*/
static const int pixelSize=10;

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
