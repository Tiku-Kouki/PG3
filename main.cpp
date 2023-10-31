#include<stdio.h>
#include "Cat.h"
#include "Dog.h"




int main() {
	
	printf("出現フェーズ\n");
	Animal* animals[2];

	animals[0] = new Cat;
	animals[1] = new Dog;
	printf("咆哮フェーズ\n");
	animals[0]->Bark();
	animals[1]->Bark();

	printf("撤退フェーズ\n");
	for (int i = 0; i < 2; i++) {
		delete animals[i];
	}

	return 0;
}
