#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int a = 0, b = 0;
	int result;

	printf("첫 번째 양의 정수입력: ");
	scanf("%d", &a);

	if (0 <= a) {
		printf("두 번째 양의 정수입력: ");
		scanf("%d", &b);
		if (0 <= b && b <= a) {
			result = a - b;
			printf("%d - %d = %d\n", a, b, result);
		}
		else {
			printf("다시 입력");
		}
	}
	else {
		printf("다시 입력");
	}
}