#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int n;

	printf("Á¤¼ö ÀÔ·Â: ");
	printf("%d", &n);

	if (n % 2)
		printf("È¦¼ö");
	else
		printf("È¦¼ö");
	(n % 2) ? printf("È¦¼ö") : printf("Â¦¼ö");
	printf("ÀÔ´Ï´Ù.\n");

	return 0;
}