#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int height, lower, upper, step;
	float weight;
	printf("�аݱq�h��cm�}�l:");
	scanf_s("%d", &lower);
	printf("�аݨ�h��cm:");
	scanf_s("%d", &upper);
	printf("�C�j�h��cm:");
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