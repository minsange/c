#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
	int number;
	char favorite_subject[100];
};


void print(struct Student *p, int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		printf("number = %d, favorite subject = %s\n", (p + i)->number, (p + i)-> favorite_subject);
	}	
}

int main(void)
{
	struct Student *p;
	p = (struct Student *)malloc(2 * sizeof(struct Student));
	if(p == NULL)
	{
		printf("dynamic memory allocation failed");
		exit(1);
	}
	
	p->number = 1;
	strcpy(p->favorite_subject, "Math");
	
	(p + 1)->number = 2;
	strcpy((p + 1)->favorite_subject, "English");
	
	print(p, 2);
	free(p);
	return 0;
}
