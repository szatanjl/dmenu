/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
static unsigned int lineheight = 0;         /* -H option; minimum height of a menu line      */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"monospace:pixelsize=16:antialias=true:autohint=true"
};
static const char *colors[SchemeLast][2] = {
	/*                fg         bg       */
	[SchemeNorm] = { "#d3dae3", "#383c4a" },
	[SchemeSel]  = { "#5294e2", "#383c4a" },
	[SchemeOut]  = { "#7c818c", "#323c4a" },
};

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " /,;:";
