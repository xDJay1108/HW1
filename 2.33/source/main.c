#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float km, gascost, gaskm, total;
	int parkingfees, tolls;
	printf("�п�J:\n�@��Ѫ��`���{��(����):");
	scanf_s("%f", &km);
	printf("�T�o�@���ɦh�ֿ�:");
	scanf_s("%f", &gascost);
	printf("�����@���ɯ��p�h�֤���:");
	scanf_s("%f", &gaskm);
	printf("�@�Ѫ������O:");
	scanf_s("%d", &parkingfees);
	printf("�@�Ѫ��q��(�L��)�O:");
	scanf_s("%d", &tolls);
	
	total = (km / gaskm)*gascost + parkingfees + tolls;
	printf("�@�ѤU�Ӷ}���h�u�@����O:%.2f\n",total);

	system("pause");
	return 0;
}