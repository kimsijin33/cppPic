#include <iostream>
#include <string>
//#include <string.h>
#include <sstream>
#include <vector> // 벡터에 담을 거라서.
//#include <cstdio>
#include <typeinfo>

using namespace std;

//int main()
int main(int argc, char** argv)
{
	cout << "Have argc: " << argc << endl;
	for (int i = 0; i < argc; ++i) {
		cout << "argv[" << i << "]: " << argv[i] << endl;
	}
	
	//string filename = "";

	//cout << "bpm change wav 파일명을 입력하세요: ";

	//cin >> filename;


	//cout << "bpm change wav 파일명: " << filename << endl;

	//getline
	//char sports[100];
	//cin.getline(sports, 100, '\n');

#if 0
	string sports;
	getline(cin, sports);
	//cout << "입력값: " << sports << endl;


	//char* p_str = strtok_s(sport," ");

	//while (p_str != NULL) {
	//	cout << p_str << ' ';
	//	p_str = strtok_s(NULL," ");
	//}


	istringstream ss(sports);
	string subs1;
	vector<string> v;

	while(getline(ss, subs1, ' ')) {
		v.push_back(subs1);
	}

	cout << v.size() << endl;

	int i; 
	for(i = 0; i < v.size(); i++) {
		cout << "v[" << i <<"]: " << v[i] << endl;
	}
	//string v_0 = v[0];
	//cout << "v_0: " << v_0 << endl;
	cout << "v[0]: " << typeid(v[0]).name() << endl;

	string v_0 = string(v[0]);
	string path1 = "x64\\Release\\Cplusplus.exe";
	string path2 = "x64\\Release\\"+ v_0 + ".exe";


	cout << "v_0: " << v_0 << endl;
	//cout << "2: " << path + v_0 + ".exe" << endl;
	cout << "path1: " << path1 << endl;
	cout << "path2: " << path2 << endl;
	//if (rename("Cplusplus.exe", "BPMchange.exe") != 0) {


	//if (rename("Cplusplus.exe", (path + v_0+".exe").c_str()) != 0) {
	if (rename(path1.c_str(), path2.c_str()) != 0) {

		perror("Error renaming file");
	}
	else {
		cout << "File named successfully";
	}
#endif

	return 0;

}
