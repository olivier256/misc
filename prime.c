#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int getFirstDivisorOrZero(int);

int main(int argc, char *argv[]) {
	int i, n;
	if (argc != 2) {
		printf("Usage: prime 37 && echo %%ERRORLEVEL%%\n");
		return 1;
	}
	n = atoi(argv[1]);
	i = getFirstDivisorOrZero(n);
	if (i > 0) {
		printf("%i est divisible par %i\n", n, i);
	} else {
		printf("%i est premier\n", n);
	}
}

int getFirstDivisorOrZero(int n) {
	int i;
	int N = sqrt(n);
	for (i = 2; i <= N; i++) {
		if (n % i == 0) {
			return i;
		}
	}
	return 0;
}
