#include <iostream>

class Point {
public:
	
	//void SetXY(int x, int y);
	
	
	//Point();
	//���� �ذ��� ���
	void SetXY(int x, int y);
	void Print();
	Point();
	//void Print();
	//51p ���� �ؼ��� ����
	//void SetXY(int x1, int y1)
	//{
	//	x = x1;
	//	y = y1;
	//}

private : 
	int x, y;
};

Point::Point()
{
	x = 0;
	y = 0;
}

void Point::Print() {

	std::cout << "x : " << x << std::endl;
	std::cout << "y : " << y << std::endl;
}

void Point::SetXY(int x, int y) {
  //���� �ذ��� ���
	Point::x = x;
	Point::y = y;


	//Point.x = 30;
	//Point.y = 100;
	//std::cout << "s x : " << x << std::endl;
	//std::cout << "s y : " << y << std::endl;
}


int main()
{
	Point point1;
	point1.SetXY(50, 200);

	point1.Print();

	return 0;
}
