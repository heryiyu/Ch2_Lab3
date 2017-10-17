#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int grade;
	int acount = 0;
	int bcount = 0;
	int ccount = 0;
	int dcount = 0;
	int fcount = 0;
	printf("enter the letter grades.\n");
	printf("enter the EOF character to end input.\n");
	while ((grade = getchar()) != EOF)
	{
		// printf("%d",grade);
		switch (grade)
		{
		case 'A':
		case 'a':
			++acount;
			break;
		case 'B':
		case 'b':
			++bcount;
			break;
		case 'C':
		case 'c':
			++ccount;
			break;
		case 'D':
		case 'd':
			++dcount;
			break;
		case 'F':
		case 'f':
			++fcount;
			break;

		case '\n':
		case '\t':
		case ' ':
			break;
		default:
			printf("Incorrect letter grade entered.\n");
			printf("Enter anew grade.\n");
			break;
		}
	}
	printf("\nTotals for each etter grade are:\n");
	printf("A: %d\n", acount);
	printf("B: %d\n", bcount);
	printf("C: %d\n", ccount);
	printf("D: %d\n", dcount);
	printf("F: %d\n", fcount);

	printf("\n");
	system("pause");
	return 0;
}