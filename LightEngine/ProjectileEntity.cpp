#include "ProjectileEntity.h"
#include <iostream>

void ProjectileEntity::OnCollision(Entity* other)
{
	std::cout << "j'ai touch� le zombie !" << std::endl;

}
