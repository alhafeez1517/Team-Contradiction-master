#pragma once
#ifndef __ENEMY__
#define __ENEMY__
#endif
#include "Frame.h"
#include "GameObject.h"
#include "AI.h"
//To instantiate an enemy, instantiate that enemy's AI and give it coordinates. The AI's constructor will start a chain reaction that spawns said enemy
class Enemy : public GameObject
{
public:
	Enemy();
	Enemy(Frame enemyFrame, int enemyHealth, AI* enemyAI, float targetTransform[2]);
	~Enemy();
	void Damage();
	float GetTransform(int i);
	Frame GetFrame();
	void Move();
#pragma region From GameObject
	void draw() override;
	void update() override;
	void clean() override;
#pragma endregion
private:
	Frame frame;
	int health;
	AI* aI;
	float transform[2] = { 0,0 };
};