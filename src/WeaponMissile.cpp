#include "WeaponMissile.h"
#include "Game.h"

WeaponMissile::WeaponMissile(std::string weaponName, std::string weaponPath, glm::vec2 position)
{
	TheTextureManager::Instance()->load(weaponPath, weaponName, TheGame::Instance()->getRenderer());
	SetSpeed(250.0f);

	glm::vec2 size = TheTextureManager::Instance()->getTextureSize(weaponName);
	setWidth(size.x);
	setHeight(size.y);
}

WeaponMissile::~WeaponMissile()
{
}

void WeaponMissile::Fire()
{
}

void WeaponMissile::Move()
{
	/*glm::vec2 moveRight = glm::vec2(50.0f * GetVelocity(), 0.0f);*/

//glm::vec2 newVelocity = getPosition() * moveRight; // * Time.deltaTime?

//setVelocity(newVelocity);

	setVelocity(glm::vec2(70.0f * GetSpeed(), 0.0f));
}
