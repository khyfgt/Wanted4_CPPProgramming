#include "Entity.h"
#include "../Vector.h"
#include <iostream>


//namespace Wanted

Entity::Entity(int x, int y)
{
	position = new Vector();
	position->x = x;
	//(*position).x = x;
	position->y = y;
}

	Entity::Entity(const Entity& other)
{
	std::cout << "copy constructor calle\n";
	// 기본 복사 생성자가 하는일
	//값 복사
	//position = other.position;


	//깊은 복사(Deep copy)
	// 공간 확보
	position = new Vector();

	//값 복사
	position->x = other.position->x;
	position->y = other.position->y;

}

	Entity::~Entity()
{
	if (position)
	{
		delete position;
		position = nullptr;
	}
}