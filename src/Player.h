#pragma once
#ifndef __Player__
#define __Player__

#include "GameObject.h"
#include "TextureManager.h"

class Player : public GameObject {
public:
	Player();
	~Player();

	// Draw the object
	void draw() override;

	// Update the object
	void update() override;

	// remove anything that needs to be deleted
	void clean() override;

	//Movement
	void Move() override;
private:

};


#endif /* defined (__Player__) */