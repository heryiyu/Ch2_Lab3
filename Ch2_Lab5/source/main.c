#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float pop = 6763;
	float rate = 0.0118;
	float newpop = pop;
	float newpop2 = pop;
	int year;
	float a=1+rate;

	printf("%15s%30s%25s\n", "Years from now", "Population (in millions)", "Increase (in millions)");

	for (year = 1; year <= 75; year++)
	{
		newpop2 = newpop;
		newpop = pop*a;
		a = a*(1 + rate);
		printf("%15d%30.2f%25.2f\n", year, newpop, newpop - newpop2);
	}

	system("pause");
	return 0;
}
