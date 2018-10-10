#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num;
	printf("Please enter an integer:");
	scanf_s("%d",&num);
	if (num % 2 == 0)
	{
		printf("%d is even\n",num);
	}
	if (num % 2 == 1)
	{
		printf("%d is odd\n", num);
	}
	system("pause");
	return 0;
}