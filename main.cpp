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

	const char* mes = "”ŽšˆÈŠO‘ã“ü‚Å‚«‚Ü‚¹‚ñ";

	return mes;

}
void PrintCorrect(void) {
	printf("³‰ð\n");

}
void PrintMiss(void) {
	printf("•s³‰ð\n");


}


typedef void (*PFunc)(int *);

void DispResult(int* s) {

	printf("%d•b‘Ò‚Á‚½\n",*s);


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
	if (a > 2||a<0) {

		printf("‘Î‰ž‚µ‚Ä‚¢‚Ü‚¹‚ñ");
	}
	else
	{
		miss();

	}




}


int main() {

	/*void (*pfunc)();
	pfunc = PrintHelloWorld;
	printf("%p\n", PrintHelloWorld);
	printf("%p\n", * pfunc);*/

	//pfunc();

	//—”‚ð‰Šú‰»‚·‚é
	unsigned int currentTime = time(nullptr);

	srand(currentTime);

	int n = 0;
	for (int i = 0; i <= 4; i++)
	{
		 n = rand() % 6 + 1;
	}
	int num = 0;
	

	

	int letter;

	
	printf("‹ô‘R‚È‚ç0Šï”‚È‚ç1‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");

	scanf_s("%d", &letter);

	


	PFunc p;
	p = DispResult;
	setTimeout(p, 5);

	Dice(n, letter);

	return 0;
}
