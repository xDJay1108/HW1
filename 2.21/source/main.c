#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	for (int i = 0; i < 9;i++)
	{
		if ((i == 0) || (i == 8))
		{
			for (int j = 0; j < 9;j++)
			{
				printf("*");
			}
		}
		else{
			for (int j = 0; j < 9; j++)
			{
				if ((j==0)||(j==8))printf("*");
				else printf(" ");
			}
		}
		printf("\n");
	}
	printf("\n");

	for (int i = 0; i < 9; i++)
	{
		if ((i == 0) || (i == 8))
		{
			for (int j = 0; j < 3; j++)
			{
				printf(" ");
			}
			for (int j = 0; j < 3; j++)
			{
				printf("*");
			}
		}
		else if ((i == 1) || (i == 7)){
			printf(" *");
			for (int j = 0; j < 5; j++)
			{
				printf(" ");
			}
			printf("* ");
		}
		else{
			for (int j = 0; j < 9; j++)
			{
				if ((j == 0) || (j == 8))printf("*");
				else printf(" ");
			}
		}
		printf("\n");
	}
	printf("\n");

	for (int i = 0; i < 9; i++)
	{
		if (i < 3)
		{
			for (int j = 0; j < 5-(i+1); j++)
			{
				printf(" ");
			}
			for (int j = 0; j < (2*(i+1)-1); j++)
			{
				printf("*");
			}
		}
		else{
			for (int j = 0; j < 4; j++)
			{
				printf(" ");
			}
			printf("*");
		}
		printf("\n");
	}
	printf("\n");

	for (int i = 0; i < 9; i++)
	{
		if (i < 5)
		{
			for (int j = 0; j < 5-(i+1); j++)
			{
				printf(" ");
			}
			printf("*");
			if (i!=0)
			{
				for (int j = 0; j < ((2*i)-1); j++)
				{
					printf(" ");
				}
				printf("*");
			}
			
		}
		else{
			for (int j = 0; j < (i-4); j++)
			{
				printf(" ");
			}
			printf("*");
			if (i != 8)
			{
				for (int j = 0; j < (i - 3 * (i - 5)); j++)
				{
					printf(" ");
				}
				printf("*");
			}
		}
		printf("\n");
	}
	system("pause");
	return 0;
}