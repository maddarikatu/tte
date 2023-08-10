#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#include "tte.h"
#include "config.h"

int main(int argc, char *argv[]) {
	time_t secs = time(NULL);
	struct tm lt = {0};
	localtime_r(&secs, &lt);
	signed int offset = lt.tm_gmtoff, leap = (ALL_LEAP - (secs / LEAP)) * DAY;

	signed int remain = MAX_SECS - secs - offset - leap;

	struct Times t;
	calc_times(&t, remain);

	char *str = (char *)malloc(64);
	memset(str, 0, 64);
	make_string(&t, &str);

	printf("%s%s%s", intro, str, outro);

	free(str);

	return 0;
}
