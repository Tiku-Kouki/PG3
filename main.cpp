#include<stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <random>
#include<time.h>
template <typename Type>

Type Max(Type a, Type b) {
	if (a > b) {
		return a;
	}
	return b;
}

const char* Max(char a, char b) {

	const char* mes = "数字以外代入できません";

	return mes;

}
void PrintCorrect(void) {
	printf("正解\n");

}
void PrintMiss(void) {
	printf("不正解\n");


}


typedef void (*PFunc)(int *);

void DispResult(int* s) {

	printf("%d秒経過した為結果\n",*s);


}

void setTimeout(PFunc p, int second) {
	Sleep(second * 1000);

	p(&second);
}

void Dice(int Rand, int a) {

	void (*pfunc)();
	void (*miss)();

	pfunc = PrintCorrect;
	miss = PrintMiss;
	
	//Rand = rand() % 6 + 1;


	if ((Rand % 2 == 0 && a == 0)|| (Rand % 2 != 0 && a == 1)) {

		pfunc();


	}
	
	else
	if((Rand % 2 == 0 || a == 1) && (Rand % 2 != 0 && a == 0))
	{
		miss();

	}
	else
	if (a > 1 || a < 0) {

		printf("0,1以外は対応していません");
	}




}


int main() {

	/*void (*pfunc)();
	pfunc = PrintHelloWorld;
	printf("%p\n", PrintHelloWorld);
	printf("%p\n", * pfunc);*/

	//pfunc();

	//乱数を初期化する
	unsigned int currentTime = time(nullptr);

	srand(currentTime);

	int n = 0;
	for (int i = 0; i <= 4; i++)
	{
		 n = rand() % 6 + 1;
	}
	int num = 0;
	

	

	int letter;

	
	printf("偶然なら0奇数なら1を入力してください\n");

	scanf_s("%d", &letter);

	

	if (letter == 0 || letter == 1) {
		PFunc p;
		p = DispResult;
		setTimeout(p, 3);
	}
	Dice(n, letter);

	return 0;
}
