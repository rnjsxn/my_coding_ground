#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int a = 0, b = 0;
	int result = 0;

	printf("ù��° ���� ���� �Է�: ");
	scanf("%d", &a);
	printf("�ι�° ���� ���� �Է�: ");
	scanf("%d", &b);

	result = a + b;

	if (0 < a && 0 < b) {
		printf("%d + %d = %d\n", a, b, result);
	}
	else {
		printf("�ٽ� �Է��Ͻÿ�\n");
	}
}