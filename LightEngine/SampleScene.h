#pragma once

#include "Scene.h"

class PlantEntity;
class ZombieEntity;

class SampleScene : public Scene
{
	PlantEntity* pPlant1;
	PlantEntity* pPlant2;
	PlantEntity* pPlant3;

	ZombieEntity* pZombie1;
	ZombieEntity* pZombie2;
	ZombieEntity* pZombie3;

	ZombieEntity* pEntitySelected;

private:
	void TrySetSelectedEntity(ZombieEntity* pEntity, int x, int y);

public:
	void OnInitialize() override;
	void OnEvent(const sf::Event& event) override;
	void OnUpdate() override;
};