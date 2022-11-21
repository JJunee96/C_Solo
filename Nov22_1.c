#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b, c, d;
	int result;

	printf("첫번째 계산할 값을 입력하세요 ==> ");
	scanf("%d", &a);
	printf("두번째 계산할 값을 입력하세요 ==> ");
	scanf("%d", &b);
	printf("세번째 계산할 값을 입력하세요 ==> ");
	scanf("%d", &c);
	printf("네번째 계산할 값을 입력하세요 ==> ");
	scanf("%d", &d);

	result = a + b + c + d;

	printf("%d + %d + %d + %d = %d\n", a, b, c, d, result);

	int k;

	printf("첫번째 계산할 값을 입력하세요 ==> ");
	scanf("%d", &a);
	printf("<1>덧셈 <2>뺄셈 <3>곱셈 <4>나눗셈");
	scanf("%d", &k);
	printf("두번쨰 계산할 값을 입력하세요 ==> ");
	scanf("%d", &b);

	if (k == 1) {
		result = a + b;
		printf("%d + %d = %d\n", a, b, result);
	}

	if (k == 2) {
		result = a - b;
		printf("%d - %d = result\n", a, b, result);
	}
}