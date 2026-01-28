#include <iostream>

//매크로 안에서 어떤 항목 앞에 #를 붙이면
//무지성(무조건)으로 문자열로 변호나함
#define NAME(x) #x



//순수 가상 함수를 가지는 클래스
//이터페이스
//tnstn rktkd gkatnaks rkwudi gka
class NameInterface
{
public:
	//순수 가상 함수(Pure)
	virtual const char* GetName() const = 0;
	//virtual const char* GetName() const PURE;
};

class Entity : public NameInterface
{
public:

	virtual const char* GetName() const override;
	{
		return NAME(Entity);
	}


};


class Entity
{
public:
	//const char* GetName() const { return "Entity"; }
	virtual const char* GetName() const { return NAME(Entity); }
};

class Player : public Entity
{
public:
	Player(const char* name)
	{
		//내부의 name 설정
		//크기
		size_t length = strlen(name) + 1;

		//할당
		this->name = new char[length];

		//문자열 복사
		strcpy_s(this->name, length, name);
	}

	~Player()
	{
		if (name)
		{
			delete[] name;
			name = nullptr;
		}
	}

	virtual const char* GetName() const override { return name; }

private:
	char* name = nullptr;

};



int main()
{
	Entity* entity = new Entity();
	std::cout << entity->GetName() << "\n";

	Player* player = new Player("Ronniej");
	//Entity* player = new Player("Ronniej");
	std::cout << player->GetName() << "\n";




	delete player;
	delete entity;

	std::cin.get();
}