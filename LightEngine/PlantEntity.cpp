#include "PlantEntity.h"
#include <iostream>

//Setter
void PlantEntity::SetCapacity(int bCapacity)
{
	mCapacity = bCapacity;
}

void PlantEntity::SetAmmoLeft(int bAmmo)
{
	mAmmo = bAmmo;
}

void PlantEntity::SetHP(int bHP)
{
	mHP = bHP;
}


//Getter
int PlantEntity::GetCapacity()
{
	return mCapacity;
}

int PlantEntity::GetAmmoLeft()
{
	return mAmmo;
}

int PlantEntity::GetHP()
{
	return mHP;
}


void PlantEntity::OnCollision(Entity* other) 
{
	this->Destroy();
	std::cout << "j'ai ete destruit, shit" << std::endl;
}