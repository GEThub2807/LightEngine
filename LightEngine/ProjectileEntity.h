#pragma once
#include "Entity.h"


class ProjectileEntity : public Entity
{
private:

public:
	ProjectileEntity(float radius, const sf::Color& color) : Entity(radius, color) {}

	void OnCollision(Entity* other) override;
};
