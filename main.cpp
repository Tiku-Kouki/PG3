#include<stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <random>
#include<time.h>
#include <functional>
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
void PrintCorrect(void) {
	printf("����\n");

}
void PrintMiss(void) {
	printf("�s����\n");


}


typedef void (*PFunc)(int *);

void DispResult(int* s) {

	printf("%d�b�o�߂����׌���\n",*s);


}

void setTimeout(int second) {
	Sleep(second * 1000);

	
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
	if((Rand % 2 == 0 && a == 1) || (Rand % 2 != 0 && a == 0))
	{
		miss();

	}
	else
	if (a > 1 || a < 0) {

		printf("0,1�ȊO�͑Ή����Ă��܂���");
	}




}


int main(int argc,const char *argv[]) {

	/*void (*pfunc)();
	pfunc = PrintHelloWorld;
	printf("%p\n", PrintHelloWorld);
	printf("%p\n", * pfunc);*/

	//pfunc();

	//����������������
	unsigned int currentTime = time(nullptr);

	srand(currentTime);

	int n = 0;
	
	n = rand() % 6 + 1;
	
	int num = 0;
	

	

	int letter;

	std::function<int(int)> fx = [](int i) {return i; };
	
	printf("%d\n",n);
	printf("���R�Ȃ�0,��Ȃ�1����͂��Ă�������\n");

	scanf_s("%d", &letter);

	

	if (letter == 0 || letter == 1) {
		
		
		setTimeout(3);
		printf("�I�΂ꂽ��:%d\n", fx(n));
		
	}
	
	Dice(fx(n), letter);
	
	return 0;

}
