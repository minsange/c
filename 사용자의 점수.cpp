#include <stdio.h>

int main(void)
{
	char name[10];
	int grade, math, english;
	
	printf("�̸��� �Է��Ͻÿ�: ");
	scanf("%s", name);
	printf("�г��� �Է��Ͻÿ�: ");
	scanf("%d", &grade);
	printf("���������� �Է��ϼ���");
	scanf("%d", &math);
	printf("���������� �Է��ϼ���");
	scanf("%d", &english);
	
	printf("�̸�: %s\n", name); 
	printf("�г�: %d\n", grade);
	printf("����: %d\n", math);
	printf("����: %d\n", english);
	return 0;
 } 
