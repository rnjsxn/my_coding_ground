#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Add(int num1, int num2) {
	return num1 + num2;
}
void ShowAddResult(int num) {
	printf("������� ���: %d\n", num);
}
int ReadNum(void) {
	int num;
	scanf("%d", &num);
	return num;
}

void HowToUseThisProg(void){
	printf("�� ���� ������ �Է��ϸ� ������� ���: ");
}

int main(void) {
	int result, num1, num2;
	HowToUseThisProg();
	num1 = ReadNum();
	num2 = ReadNum();
	result = Add(num1, num2);
	ShowAddResult(result);
	return 0;
}
