#pragma once
#ifndef __WEAPONMISSILE__
#define __WEAPONMISSILE__

#include "DisplayObject.h"
#include "Weapon.h"
#include <SDL\include\SDL_stdinc.h>
#include "TextureManager.h"
#include "SoundManager.h"

class WeaponMissile : public Weapon
{
public:
    WeaponMissile(std::string imagePath, std::string textureName, glm::vec2 position);
    ~WeaponMissile();

    void Fire() override;
    void Move() override;



private:

};

#endif /* defined(__MISSILE__) */

