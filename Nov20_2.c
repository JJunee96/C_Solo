#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;
	int result;

	printf("첫번째 계산할 값을 입력하세요 ==> ");
	scanf("%d", &a);

	printf("두번째 계산할 값을 입력하세요 ==> ");
	scanf("%d", &b);

	result = a + b;

	printf("%d + %d = %d\n", a, b, result);

	return 0;

}