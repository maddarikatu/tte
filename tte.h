#define MAX_SECS	2147483647

#define	MIN	(int) 60
#define	HOUR	(int) (MIN*60)
#define DAY	(int) (HOUR*24)
#define	YEAR	(int) (DAY*365)

#define	LEAP	(int) (YEAR*4+DAY)
#define ALL_LEAP	(int) (MAX_SECS/LEAP)

struct Times {
	int years;
	int days;
	int hours;
	int mins;
	int secs;
};

void make_div_keep_mod(int *div, int *mod, int num);
void calc_times(struct Times *t, int secs);
void make_string(struct Times *t, char **names);
