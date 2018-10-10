#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float km, gascost, gaskm, total;
	int parkingfees, tolls;
	printf("請輸入:\n一整天的總里程數(公里):");
	scanf_s("%f", &km);
	printf("汽油一公升多少錢:");
	scanf_s("%f", &gascost);
	printf("平均一公升能行駛多少公里:");
	scanf_s("%f", &gaskm);
	printf("一天的停車費:");
	scanf_s("%d", &parkingfees);
	printf("一天的通行(過路)費:");
	scanf_s("%d", &tolls);
	
	total = (km / gaskm)*gascost + parkingfees + tolls;
	printf("一天下來開車去工作的花費:%.2f\n",total);

	system("pause");
	return 0;
}