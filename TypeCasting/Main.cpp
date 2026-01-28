#include <iostream>

void PrintString(char* string)
{
	std::cout << string << "\n";
}

class A 
{
public:
	virtual void Test() { }
};
class B : public A
{
};

int main()
{
	const char* name = "ronnie";
	PrintString(const_cast<char*>(name));

	int number = 10;
	float floatNumber = static_cast<float>(number);

	//A* a = new A();
	//B* b = static_cast<B*>(a);    // 잘 알고 써야함
	//B* b = reinterpret_cast<B*>(a);   // 위험
	//B* b = dynamic_cast<B*>(a);


	const type_info& ainfo = typeid(a);
	const type_info& binfo = typeid(b);
	if (aInfo == bInfo)
	{
		std::cout << "Same\n"
	}

	delete a;
	std::cin.get();
}