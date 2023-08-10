#include <stdio.h>

#include "tte.h"
#include "config.h"

/* Make a string from a table of times passed as a pointer */
void make_string(struct Times *t, char **string) {
	int *times[4]   = { &t->years, &t->days, &t->hours, &t->mins };
	for (int i = 0; i < 4; i++) {
		if (*times[i] > 0) {
#ifndef DIFF_PREF_PL
			sprintf(*string, "%s%d %s%s, ",
					*string, *times[i], lapse_names[i], (*times[i] > 1 ? plural : ""));
#else
			if (*times[i] > 1)
				sprintf(*string, "%s%d %s, ", *string, *times[i], lapse_plurals[i]);
			else
				sprintf(*string, "%s%d %s, ", *string, *times[i], lapse_names[i]);
#endif
		}
	}
	int s = t->secs;
	if (s > 0) {
#ifndef DIFF_PREF_PL
		sprintf(*string, "%sand %d %s%s.", *string, s, lapse_names[4], (s > 1 ? plural : ""));
#else
		if (s > 1)
			sprintf(*string, "%sand %d %s.", *string, s, lapse_plurals[4]);
		else
			sprintf(*string, "%sand %d %s.", *string, s, lapse_names[4]);
#endif
	} else {
		sprintf(*string, "%s%s.", *string, lapse_names[5]);
	}
}
