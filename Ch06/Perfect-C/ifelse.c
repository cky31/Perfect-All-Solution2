#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int n;

	printf("���� �Է�: ");
	printf("%d", &n);

	if (n % 2)
		printf("Ȧ��");
	else
		printf("Ȧ��");
	(n % 2) ? printf("Ȧ��") : printf("¦��");
	printf("�Դϴ�.\n");

	return 0;
}