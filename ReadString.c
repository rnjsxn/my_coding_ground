#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	char str[50]; //0~49
	int idx = 0;

	printf("���ڿ� �Է�: ");
	scanf("%s", str); //���ڿ��� ���� ������ &X
	printf("�Է� ���� ���ڿ�: %s \n", str);

	printf("���� ���� ���: ");
	
	while (str[idx] != '\0') { //�� ���� �ƴҰ�� ��
		printf("%c", str[idx]);
		idx++; //����
	}
	printf("\n");
	return 0;
}