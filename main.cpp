#include<stdio.h>
template <typename Type>

Type Max(Type a, Type b) {
	if (a > b) {
		return a;
	}
	return b;
}

const char* Max(char a, char b) {

	const char* mes = "�����ȊO����ł��܂���";

	return mes;

}

int Recursive(int n,int maxN, int &num) {
	
	
	if (n <= 1) {
		return (num +=100);
	}
	int result = ((Recursive(n - 1,maxN, num) * 2) - 50);
	num +=result;


	if (n >= maxN) {

		return num;

	}


	return result;
}


int main() {

	int n = 8;
	int num = 0;
	int result;
	int Mn = 1072;
	int result2;
	result2 = Mn * n;

	result = Recursive(n,n, num);

	printf("�ċA�I�Ȏ����̌n:%d ��ʓI�Ȏ����̌n:%d\n", result, result2);

	printf("%d\n", Max<int>(result, result2));

	//printf("%s\n", Min('a', 'b'));
}
