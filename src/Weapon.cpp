#include "Weapon.h"
#include "Game.h"

Weapon::Weapon()
{


}

Weapon::~Weapon()
{

}

void Weapon::draw()
{

}

float Weapon::GetSpeed()
{
	return m_velocity;
}

void Weapon::SetSpeed(float speed)
{
	m_velocity = speed;
}

void Weapon::Move()
{


}
