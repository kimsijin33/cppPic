#include <iostream>
using namespace std;

int main()
{
	//p71
	/*char str[14] = "Hello, World!";
	char	*pt;	//pt�� ���ڿ��� ����Ű�� ������

	cout << str << endl;
	pt = str;	//pt�� �迭 str�� ����Ŵ
	while (*pt) {	//pt�� ����Ű�� ���ڰ� �� ���ڰ� �ƴϸ� �ݺ�, ���ڿ��� ���� �ƴϸ� �ݺ�
		if (*pt >= 'a' && *pt <= 'z')	//�ҹ����� ���
			*pt = *pt - 'a' + 'A';		//�빮�ڷ� �ٲ�
		pt++;	//pt�� ���� ���ڸ� ����Ű���� ��, ���� ���ڷ� ������ �̵�
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
	//int *pt2 = &b; //����
	const int *pt3 = &b; //������ pt3�� ��� b�� ����Ű�� ������

	cout << pt1 << endl;
	cout << pt3 << endl;
	cout << a << endl;
	cout << b << endl;
	cout << *pt1 << endl;
	cout << *&pt1 << endl;
	cout << *&a << endl;

	cout << "������ ���� ũ��: " << sizeof(pt1) << endl;
	cout << "int�� ���� ũ��: " << sizeof(a) << endl;
	cout << "int�� ���� ũ��: " << sizeof(b) << endl;
	cout << "������ ���� ũ��: " << sizeof(pt3) << endl;
	*/
	//p67 ���
	/*
	int* intPtr;	//int�� ������ ����
	intPtr = new int;	//int�� ũ���� �޸𸮸� �������� �Ҵ�
	*intPtr = 10;	//�޸𸮿� 10 ���� 

	cout << intPtr << endl;	//������ intPtr�� �� ���
	delete intPtr;
	cout << intPtr << endl;
	intPtr = nullptr;	//intPtr�� �� �����ͷ� �ʱ�ȭ
	cout << intPtr << endl;
	*/

	//p67 �ϴ�
	/*
	int *intPtr;	//int�� ������ ����
	intPtr = new int[4];	//int�� ũ���� �޸𸮸� �������� �Ҵ� ,4���� int�� ������ ���� �Ҵ�
	*intPtr = 10;	//�޸𸮿� 10 ����, �Ҵ�� ������ ���
	*(intPtr + 1) = 20;	//�޸𸮿� 20 ����, �Ҵ�� ������ ���
	intPtr[2] = 30; // *(intPtr + 2) = 30; �� ����
	cout << intPtr[0] << endl;
	cout << intPtr[1] << endl;
	cout << intPtr[2] << endl;
	
	cout << intPtr << endl;
	
	delete[] intPtr;	//�Ҵ�� �޸� ����
	cout << intPtr << endl;

	intPtr = nullptr;
	cout << intPtr << endl;
	*/

	//p72
	int a = 10, b = 20;
	//int& aRef = a;	//aRef�� a�� ������
	int &aRef = a;
	cout << aRef << endl;
	aRef = 100;

	aRef = b;	//aRef�� b�� �����ϰ� ��
	cout << "aRef = b: " << aRef << endl;
	return 0;
}
