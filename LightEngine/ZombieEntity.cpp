#include "ZombieEntity.h"
#include <iostream>

//Setter
void ZombieEntity::SetHP(int bHP)
{
	mHP = bHP;
}




//Getter
int ZombieEntity::GetHP()
{
	return mHP;
}


void ZombieEntity::OnCollision(Entity* other) 
{
	std::cout << "j'ai touché la plante !" << std::endl;
}