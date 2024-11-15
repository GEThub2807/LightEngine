#pragma once
#include "Entity.h"

class ZombieEntity : public Entity
{
private:
	int mHP;
public:
	ZombieEntity(float radius, const sf::Color& color) : Entity(radius, color) {}

	void SetHP(int bHP);

	int GetHP();

	void OnCollision(Entity* other) override;
};