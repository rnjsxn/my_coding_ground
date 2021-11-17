#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	char str[50]; //0~49
	int idx = 0;

	printf("문자열 입력: ");
	scanf("%s", str); //문자열을 받을 때에는 &X
	printf("입력 받은 문자열: %s \n", str);

	printf("문자 단위 출력: ");
	
	while (str[idx] != '\0') { //널 문자 아닐경우 참
		printf("%c", str[idx]);
		idx++; //증가
	}
	printf("\n");
	return 0;
}