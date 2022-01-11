#include <stdio.h>
#include <string.h>

int main(void)
{
	FILE *fp;
	char Fname[256];
	char buffer[256];
	char word[256];
	int line = 0;
	
	printf("please input the file name");
	scanf("%s", Fname);
	
	printf("please find the word you want");
	scanf("%s", word);
	
	if((fp = fopen(Fname, "r")) == NULL)
	{
		fprintf(stderr, "the file %s don't open\n", Fname);
		return 0;
	}
	
	while(fgets(buffer, 256, fp))
	{
		line++;
		if(strstr(buffer, word))
		{
			printf("the line %d : the word %s was founded\n", line, word);
		}
	}
	
	fclose(fp);
	return 0;
}
