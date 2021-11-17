#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int cn = 0; //선택 1,2
	int a = 0, b = 0; //정수 입력
	int num1 = 0, num2 = 0; //저장
	int num3 = 0, num4 = 0; //절대값 치환
	int result1 = 0, result2 = 0; //결과
	int result3 = 0, result4 = 0; //절대값 결과

	printf("덧셈 결과 1 선택 \n");
	printf("뺄셈 결과 2 선택: ");

	scanf("%d", &cn);

	while (cn==1) {
		printf("첫번째 양의 정수 입력: ");
		scanf("%d", &a);
		num1 = a;
		if (0<num1) {
			printf("두번째 양의 정수 입력: ");
			scanf("%d", &b);
			num2 = b;
			if (0 < num2) {
				result1 = num1 + num2;
				printf("%d + %d = %d", num1, num2, result1);
			}
			else if(a < abs(num2)) {
				num3 = num2;
				result3 = num1 + num3;
				printf("답은 음수: \n");
				printf("%d + (%d) = %d", num1, num3, result3);
			}
			else {
				printf("%d + %d = %d", num1, num2, result1);
			}
		}
		break;
	}
	while (cn == 2) {
		printf("첫번째 양의 정수 입력: ");
		scanf("%d", &a);
		num1 = a;
		if (0 < num1) {
			printf("두번째 양의 정수 입력: ");
			scanf("%d", &b);
			num2 = b;
			if (0 < num2) {
				result2 = num1 - num2;
				printf("%d - %d = %d", num1, num2, result2);
			}
			else if (a < abs(num2)) {
				num4 = num2;
				result4 = num1 - num4;
				printf("답은 양수: \n");
				printf("%d - %d = %d", num1, num4, result4);
			}
			else {
				printf("%d - %d = %d", num1, num2, result2);
			}
		}
		break;
	}
	if (2 < cn) {
		printf("다시 입력");
	}
}