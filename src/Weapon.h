#pragma once
#ifndef __WEAPON__
#define __WEAPON__

#include "DisplayObject.h"
#include "TextureManager.h"
#include <SDL\include\SDL_stdinc.h>

class Weapon : public GameObject
{
public:
	//constructor and destructor
	Weapon();
	~Weapon();

	// override methods from GameObject class
	void draw() override;
	void update() override;
	void clean() override;

	//getters and setters for weapon speed
	float GetSpeed();
	void SetSpeed(float speed);

	//Method that fires the weapon
	virtual void Fire() = 0;
	virtual void Move() = 0;

private:
	// speed in which the weapon will travel.
	float m_velocity;



};

#endif

