#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n[3];
	int temp;

	printf("Please enter three integers:\n");
	for (int i = 0; i < 3; i++)
	{
		scanf_s("%d", &n[i]);
	}
	
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < (2- i) ; j++)
		{
			if (n[j]>n[j + 1]){
				temp = n[j];
				n[j] = n[j + 1];
				n[j + 1] = temp;
			}
		}
	}

	printf("The largest integer:%d\n", n[2]);
	printf("The smallest integer:%d\n", n[0]);

	system("pause");
	return 0;
}