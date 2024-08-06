#include <iostream>
//error 240702
class myHouse {
	int room = 1;
public:
	//myHouse () {
	// } //1. 디폴트 생성자
	//2. 초기값이 있는 생성자
	int getRoom(
		//room = 1;
	);
};

myHouse::getRoom() {
	return room;
}
//myHouse::getRoom() 
//{
//	room = 2;
//}
