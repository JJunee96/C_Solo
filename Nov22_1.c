#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b, c, d;
	int result;

	printf("ù��° ����� ���� �Է��ϼ��� ==> ");
	scanf("%d", &a);
	printf("�ι�° ����� ���� �Է��ϼ��� ==> ");
	scanf("%d", &b);
	printf("����° ����� ���� �Է��ϼ��� ==> ");
	scanf("%d", &c);
	printf("�׹�° ����� ���� �Է��ϼ��� ==> ");
	scanf("%d", &d);

	result = a + b + c + d;

	printf("%d + %d + %d + %d = %d\n", a, b, c, d, result);

	int k;

	printf("ù��° ����� ���� �Է��ϼ��� ==> ");
	scanf("%d", &a);
	printf("<1>���� <2>���� <3>���� <4>������");
	scanf("%d", &k);
	printf("�ι��� ����� ���� �Է��ϼ��� ==> ");
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