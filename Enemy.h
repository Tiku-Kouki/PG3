#pragma once
#include<stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <random>
#include<time.h>




class Enemy
{
private:
	enum class Phase {
		Approach,//Ú‹ß‚·‚é
		Shot,//ËŒ‚
		Leave,//—£’E‚·‚é
		
	};

public:

	void Approach();
	void Leave();
	void Shot();


	void Init();

	void Update();

	bool EndScene() { 
		
		if (phase_ == Phase::Leave) {

			return true;
		}
	
		return false;
	}


private:

	static void (Enemy::* phaseTable[])();

	Phase phase_ = Phase::Approach;

	int phaseTime = 0;

	//static_cast<size_t> (phase_);

};

