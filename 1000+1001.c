#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int cn = 0; //���� 1,2
	int a = 0, b = 0; //���� �Է�
	int num1 = 0, num2 = 0; //����
	int num3 = 0, num4 = 0; //���밪 ġȯ
	int result1 = 0, result2 = 0; //���
	int result3 = 0, result4 = 0; //���밪 ���

	printf("���� ��� 1 ���� \n");
	printf("���� ��� 2 ����: ");

	scanf("%d", &cn);

	while (cn==1) {
		printf("ù��° ���� ���� �Է�: ");
		scanf("%d", &a);
		num1 = a;
		if (0<num1) {
			printf("�ι�° ���� ���� �Է�: ");
			scanf("%d", &b);
			num2 = b;
			if (0 < num2) {
				result1 = num1 + num2;
				printf("%d + %d = %d", num1, num2, result1);
			}
			else if(a < abs(num2)) {
				num3 = num2;
				result3 = num1 + num3;
				printf("���� ����: \n");
				printf("%d + (%d) = %d", num1, num3, result3);
			}
			else {
				printf("%d + %d = %d", num1, num2, result1);
			}
		}
		break;
	}
	while (cn == 2) {
		printf("ù��° ���� ���� �Է�: ");
		scanf("%d", &a);
		num1 = a;
		if (0 < num1) {
			printf("�ι�° ���� ���� �Է�: ");
			scanf("%d", &b);
			num2 = b;
			if (0 < num2) {
				result2 = num1 - num2;
				printf("%d - %d = %d", num1, num2, result2);
			}
			else if (a < abs(num2)) {
				num4 = num2;
				result4 = num1 - num4;
				printf("���� ���: \n");
				printf("%d - %d = %d", num1, num4, result4);
			}
			else {
				printf("%d - %d = %d", num1, num2, result2);
			}
		}
		break;
	}
	if (2 < cn) {
		printf("�ٽ� �Է�");
	}
}