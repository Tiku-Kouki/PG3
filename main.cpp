#include<stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <random>
#include<time.h>
#include "Enemy.h"





int main() {

	Enemy* enemy_ = nullptr;

	enemy_ = new Enemy();

	bool num = false;


	while (num == false)
	{
		num = enemy_->EndScene();
		enemy_->Update();
		
		
	}
	
	printf("%d\n",(int)num);


	return 0;
}
