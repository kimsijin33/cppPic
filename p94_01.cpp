//#include<stdio>
//#include<string>
#include<iostream>

int sum(int x, int y) {

	return (x + y);
}

int sum(int x, int y, int z) {
	return (x + y + z);
}

int sum(int x, int y, int z, int i) {
	return (x + y + z + i);
}

int sum(int x, int y, int z, int i, int j) {
	return (x + y + z + i + j);
}

int main() {

	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	a = sum(1, 2);
	b = sum(1, 2, 3);
	c = sum(1, 2, 3, 4);
	d = sum(1, 2, 3, 4, 5);
	std::cout << "a�� ����" << a <<"�Դϴ�."<< std::endl;
	std::cout << "b�� ����" << b << "�Դϴ�." << std::endl;
	std::cout << "c�� ����" << c << "�Դϴ�." << std::endl;
	std::cout << "d�� ����" << d << "�Դϴ�." << std::endl;
}

