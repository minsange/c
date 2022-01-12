#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *pc = NULL;
	int i = 0;
	pc = (char *)malloc(100 * sizeof(char));
	if(pc == NULL)
	{
		printf("dynamic memory allocation failed");
		exit(1);
	}
	
	for(i = 0; i < 26; i++)
	{
		*(pc + i) = 'a' + i;
	}
	
	*(pc + i) = 0; // from ASCII code the value 0 == NULL
	return 0;
}
