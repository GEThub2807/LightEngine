#pragma once
#include "Entity.h"

class PlantEntity : public Entity
{
private:
	int mCapacity;
	int mAmmo;
	int mHP;
public:
	PlantEntity(float radius, const sf::Color& color) : Entity(radius, color) {}

	void SetCapacity(int bCapacity);
	void SetAmmoLeft(int bAmmo);
	void SetHP(int bHP);

	int GetAmmoLeft();
	int GetCapacity();
	int GetHP();

	void OnCollision(Entity* other) override;
};