#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *pi, i, j;
	pi = (int *)malloc(5 * sizeof(int));
	if(pi == NULL)
	{
		printf("dynamic memory allocation failed");
		exit(1);
	}
	
	for(i = 0; i < 5; i++)
	{
		printf("you should put the value");
		scanf("%d", &pi[i]);
	}
	
	for(j = 0; j < 5; j++)
	{
		printf("%d\n", *(pi + j));
	}
	
	free(pi);
	return 0;
}

