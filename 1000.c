#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int a = 0, b = 0;
	int result = 0;

	printf("첫번째 양의 정수 입력: ");
	scanf("%d", &a);
	printf("두번째 양의 정수 입력: ");
	scanf("%d", &b);

	result = a + b;

	if (0 < a && 0 < b) {
		printf("%d + %d = %d\n", a, b, result);
	}
	else {
		printf("다시 입력하시오\n");
	}
}