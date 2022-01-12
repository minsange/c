#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *pi;
	pi = (int *)malloc(sizeof(int));
	if(pi == NULL)
	{
		printf("dynamic memory allocation failed");
		exit(1);
	}
	
	*pi = 100;
	printf("%d\n", *pi);
	free(pi); // after dynamic memory allocation use, you shoule return the existing memory 
	return 0;
}
