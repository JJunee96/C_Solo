#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;
	int result;

	printf("ù��° ����� ���� �Է��ϼ��� ==> ");
	scanf("%d", &a);

	printf("�ι�° ����� ���� �Է��ϼ��� ==> ");
	scanf("%d", &b);

	result = a + b;

	printf("%d + %d = %d\n", a, b, result);

	return 0;

}