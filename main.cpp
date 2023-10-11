#include<stdio.h>
template <typename Type>

Type Max(Type a, Type b) {
	if (a > b) {
		return a;
	}
	return b;
}

const char* Max(char a, char b) {

	const char* mes = "”šˆÈŠO‘ã“ü‚Å‚«‚Ü‚¹‚ñ";

	return mes;

}

int Recursive(int n, int &num) {
	
	
	if (n <= 1) {
		return (num +=100);
	}
	int result = ((Recursive(n - 1, num) * 2) - 50);
	num +=result;


	if (n >= 4) {

		return num;

	}


	return result;
}


int main() {

	int n = 4;
	int num = 0;
	int result;
	int Mn = 1072;
	int result2;
	result2 = Mn * n;

	result = Recursive(n, num);

	printf("Ä‹A“I‚È‘‹à‘ÌŒn:%d ˆê”Ê“I‚È‘‹à‘ÌŒn:%d\n", result, result2);

	printf("%d\n", Max<int>(result, result2));

	//printf("%s\n", Min('a', 'b'));
}
