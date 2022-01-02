#include <stdio.h>

int main(void)
{
	float x = 123456.123; // 4바이트 
	double y = 123456.123; // 8바이트 
	printf("%.2f\n", x);
	printf("%f", y);
	return 0;
 } 
