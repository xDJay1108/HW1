#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int w;
	float h,BMI;

	printf("Please enter your weight(kg) and height(cm):");
	scanf_s("%d%f", &w, &h);
	BMI = w / ((h / 100)*(h / 100));
	printf("Your BMI:%.2f\n",BMI);
	printf("Underweight:\tless than 18.5\n");
	printf("Normal weight:\tbetween 18.5 and 24.9\n");
	printf("Overweigh:\tbetween 25 and 29.9\n");
	printf("Obesity:\t30 or greater\n");

	system("pause");
	return 0;
}