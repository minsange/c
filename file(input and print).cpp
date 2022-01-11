#include <stdio.h>

int main(void)
{
	FILE *fp = NULL;
	fp = fopen("output.txt", "w"); // w -> write mode
	
	if(fp == NULL)
	{
		printf("don't open the file\n");
	}
	else
	{
		printf("the file opens successfully\n");
	}
	
	fputc('H', fp);
	fputc('E', fp);
	fputc('L', fp);
	fputc('L', fp);
	fputc('O', fp);
	
	fclose(fp);
	return 0;
}

