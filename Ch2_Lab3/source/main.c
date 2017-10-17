#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int height, lower, upper, step;
	float weight;
	printf("請問從多少cm開始:");
	scanf_s("%d", &lower);
	printf("請問到多少cm:");
	scanf_s("%d", &upper);
	printf("每隔多少cm:");
	scanf_s("%d", &step);

	for (height = lower; height <= upper; height += step)
	{
		weight = (height - 100)*0.9;
		printf("%dcm %.2fkg\n", height, weight);
	}
	printf("\n");
	system("pause");
	return 0;
}