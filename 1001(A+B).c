#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int a = 0, b = 0;
	int result;

	printf("ù ��° ���� �����Է�: ");
	scanf("%d", &a);

	if (0 <= a) {
		printf("�� ��° ���� �����Է�: ");
		scanf("%d", &b);
		if (0 <= b && b <= a) {
			result = a - b;
			printf("%d - %d = %d\n", a, b, result);
		}
		else {
			printf("�ٽ� �Է�");
		}
	}
	else {
		printf("�ٽ� �Է�");
	}
}