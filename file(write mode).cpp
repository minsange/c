#include <stdio.h>

int main(void)
{
	FILE *fp = NULL;
	int a;
	
	fp = fopen("input.txt", "r");
	
	if(fp == NULL)
	{
		printf("don't open the file\n");
	}
	else
	{
		printf("the file opens successfully\ns");
	}
	
	while((a = fgetc(fp)) != EOF)
	{
		putchar(a);
	}
	
	fclose(fp);
	return 0;
}
