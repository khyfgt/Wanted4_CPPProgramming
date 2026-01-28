#include <iostream>
#include "Entity/Entity.h"


void TestFunction(Entity entity)
{
	std::cout << "TestFunction\n";
}

int main()
{
	Entity entity(10, 20);
	Entity entity2(entity);

	//대입 할때도 복사생성자
	Entity entity3 = entity2;

	TestFunction(entity3);

	std::cin.get();
}