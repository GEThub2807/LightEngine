#include "ProjectileEntity.h"
#include <iostream>

void ProjectileEntity::OnCollision(Entity* other)
{
	std::cout << "j'ai touché le zombie !" << std::endl;

}
