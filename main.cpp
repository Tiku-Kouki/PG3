#include<stdio.h>
#include "Cat.h"
#include "Dog.h"




int main() {
	
	printf("�o���t�F�[�Y\n");
	Animal* animals[2];

	animals[0] = new Cat;
	animals[1] = new Dog;
	printf("���K�t�F�[�Y\n");
	animals[0]->Bark();
	animals[1]->Bark();

	printf("�P�ރt�F�[�Y\n");
	for (int i = 0; i < 2; i++) {
		delete animals[i];
	}

	return 0;
}
