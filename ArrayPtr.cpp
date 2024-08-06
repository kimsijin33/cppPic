#include <iostream>
using namespace std;

int main()
{
	//p71
	/*char str[14] = "Hello, World!";
	char	*pt;	//pt는 문자열을 가리키는 포인터

	cout << str << endl;
	pt = str;	//pt가 배열 str를 가리킴
	while (*pt) {	//pt가 가리키는 문자가 널 문자가 아니면 반복, 문자열의 끝이 아니면 반복
		if (*pt >= 'a' && *pt <= 'z')	//소문자인 경우
			*pt = *pt - 'a' + 'A';		//대문자로 바꿈
		pt++;	//pt가 다음 문자를 가리키도록 함, 다음 문자로 포인터 이동
	}
	cout << str << endl;
	*/

	//p64
	//https://min-zero.tistory.com/entry/C-%EA%B8%B0%EB%B3%B8-%EA%B3%B5%EB%B6%80%EC%A0%95%EB%A6%AC-6-%ED%8F%AC%EC%9D%B8%ED%84%B0pointer
	/*
	int a = 10;
	const int b = 20;
	//int* pt1 = &a;
	int *pt1 = &a;
	//int *pt2 = &b; //오류
	const int *pt3 = &b; //포인터 pt3는 상수 b를 가리키는 포인터

	cout << pt1 << endl;
	cout << pt3 << endl;
	cout << a << endl;
	cout << b << endl;
	cout << *pt1 << endl;
	cout << *&pt1 << endl;
	cout << *&a << endl;

	cout << "포인터 변수 크기: " << sizeof(pt1) << endl;
	cout << "int형 변수 크기: " << sizeof(a) << endl;
	cout << "int형 변수 크기: " << sizeof(b) << endl;
	cout << "포인터 변수 크기: " << sizeof(pt3) << endl;
	*/
	//p67 상단
	/*
	int* intPtr;	//int형 포인터 선언
	intPtr = new int;	//int형 크기의 메모리를 동적으로 할당
	*intPtr = 10;	//메모리에 10 저장 

	cout << intPtr << endl;	//포인터 intPtr의 값 출력
	delete intPtr;
	cout << intPtr << endl;
	intPtr = nullptr;	//intPtr을 널 포인터로 초기화
	cout << intPtr << endl;
	*/

	//p67 하단
	/*
	int *intPtr;	//int형 포인터 선언
	intPtr = new int[4];	//int형 크기의 메모리를 동적으로 할당 ,4개의 int를 저장할 공간 할당
	*intPtr = 10;	//메모리에 10 저장, 할당된 공간을 사용
	*(intPtr + 1) = 20;	//메모리에 20 저장, 할당된 공간을 사용
	intPtr[2] = 30; // *(intPtr + 2) = 30; 과 동일
	cout << intPtr[0] << endl;
	cout << intPtr[1] << endl;
	cout << intPtr[2] << endl;
	
	cout << intPtr << endl;
	
	delete[] intPtr;	//할당된 메모리 해제
	cout << intPtr << endl;

	intPtr = nullptr;
	cout << intPtr << endl;
	*/

	//p72
	int a = 10, b = 20;
	//int& aRef = a;	//aRef는 a의 참조자
	int &aRef = a;
	cout << aRef << endl;
	aRef = 100;

	aRef = b;	//aRef가 b를 참조하게 함
	cout << "aRef = b: " << aRef << endl;
	return 0;
}
