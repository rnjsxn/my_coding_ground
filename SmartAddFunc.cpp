
#include <iostream>

int Add(int num1, int num2) {
	return num1 + num2;
}
void ShowAddResult(int num) {
	std::cout<<"������� ���: "<<num<<std::endl;
}
int ReadNum(void) {
	int num;
	std::cin>>num;
	return num;
}

void HowToUseThisProg(void) {
	std::cout<<"�� ���� ������ �Է��ϸ� ������� ���: "<<std::endl;
}

int main(void) {
	int num1=0,num2=0,result=0;
	HowToUseThisProg();
	num1=ReadNum();
	num2=ReadNum();
	result = Add(num1,num2);
	ShowAddResult(result);
	return 0;
}
