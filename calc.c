#include "tte.h"

/* Divide an integer and store the result and the remainder in pointers */
void make_div_keep_mod(int *div, int *mod, int num) {
	*div = *mod / num;
	*mod %= num;
}

/* Get years, days, hours and minutes from a given amount of seconds, store them in a table passed as pointer */
void calc_times(struct Times *t, int remain) {
	int *fua[4] = { &t->years, &t->days, &t->hours, &t->mins };
	int lap[4] = { YEAR, DAY, HOUR, MIN };
	for (int i = 0; i < 4; i++)
		make_div_keep_mod(fua[i], &remain, lap[i]);
	t->secs = remain % MIN;
}
