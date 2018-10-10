#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	for (int i = 0; i < 5; i++)
	{
		if (i == 0)
		{
			for (int j = 0; j < 9; j++)
			{
				printf("F");
			}
		}
		else if (i == 4)
		{
			printf("        F");
		}
		else 
		{
			printf("    F   F");
		}
		printf("\n");
	}
	printf("\n");

	for (int i = 0; i < 5; i++)
	{
		if ((i == 0) || (i == 4))
		{
			printf("        Y");
		}
		else if ((i == 1) || (i == 3))
		{
			printf("       Y");
		}
		else
		{
			printf("YYYYYYY");
		}
		printf("\n");
	}
	printf("\n");

	for (int i = 0; i < 5; i++)
	{
		if (i == 0)
		{
			for (int j = 0; j < 9; j++)
			{
				printf("L");
			}
		}
		else
		{
			printf("L");
		}
		printf("\n");
	}
	printf("\n");
	system("pause");
	return 0; 
}