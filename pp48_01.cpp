#include <iostream>

class Person {
public:
	int age;
	char name[10];
};

int main()
{
	Person kim;
	kim.age = 23;
	strcpy_s(kim.name, "Sunghoon");
	std::cout << "�̸� : " << kim.name << std:: endl;
	std::cout << "���� : " << kim.age << std::endl;
	return 0;
}