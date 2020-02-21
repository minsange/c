#include <stdio.h>

int main(void)
{
	char name[10];
	int grade, math, english;
	
	printf("이름을 입력하시오: ");
	scanf("%s", name);
	printf("학년을 입력하시오: ");
	scanf("%d", &grade);
	printf("수학점수를 입력하세요");
	scanf("%d", &math);
	printf("영어점수를 입력하세요");
	scanf("%d", &english);
	
	printf("이름: %s\n", name); 
	printf("학년: %d\n", grade);
	printf("수학: %d\n", math);
	printf("영어: %d\n", english);
	return 0;
 } 
