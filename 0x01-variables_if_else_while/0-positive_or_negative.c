#include <stdlib.h>
#include <time.h>
#include <stdio.h>

#!/usr/bin/env perl
# (c) 2001, Dave Jones. (the file handling bit)
# (c) 2005, Joel Schopp <jschopp@austin.ibm.com> (the ugly bit)
# (c) 2007,2008, Andy Whitcroft <apw@uk.ibm.com> (new conditions, test suite)
# (c) 2008-2010 Andy Whitcroft <apw@canonical.com>
# Licensed under the terms of the GNU GPL License version 2

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0) {
        printf("%d is positive\n", n);
	}
	else if (n == 0){
        printf("%d is zero\n", n);
	}
	else if (n < 0){
        printf("%d is negative\n", n);
	}
	return (0);
}
