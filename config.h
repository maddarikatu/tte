/* Text before the times */
static char *intro = "Time remaining to overflow: \n";

/* Text after the times */
static char *outro = "\nBe safe.\n";

/* Names for the lapses, in singular, ordered from largest to smallest.
 * Last name is appended when the last value is 0. */
static char *lapse_names[6] = {
	"year",
	"day",
	"hour",
	"minute",
	"second",
	"exactly"
};

/* Mark of plural */
static char *plural = "s";
static char *conjunction = "and";

/* if the language has a different way of making plurals
 * uncomment this piece and define each lapse manually.
#define DIFF_PREF_PL

static char *lapse_plurals[5] = {
	"years",
	"days",
	"hours",
	"minutes",
	"seconds"
};
*/
