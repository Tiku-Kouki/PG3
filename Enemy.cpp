#include "Enemy.h"


void Enemy::Approach()
{
	printf("�ڋ�\n");

	if (phaseTime >= 1) {

		phase_ = Phase::Shot;

	}

}

void Enemy::Shot()
{
	printf("�ˌ�\n");

	if (phaseTime >= 2) {

		phase_ = Phase::Leave;

	}

}

void Enemy::Leave()
{
	printf("���E\n");
}



void Enemy::Init()
{


}

void Enemy::Update()
{
	phaseTime++;

	(this->*phaseTable[static_cast<size_t> (phase_)])();


	

}

void (Enemy::* Enemy::phaseTable[])() = {

	&Enemy::Approach,
	&Enemy::Shot,
	&Enemy::Leave,
	


};