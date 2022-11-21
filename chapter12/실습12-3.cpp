//#include<iostream> // 실습12-3
//#include<fstream>
//using namespace std;
//
//int main() {
//	ifstream fin;
//	fin.open("input2.txt"); //파일 읽기
//	if (!fin) {
//		cout << "input.txt파일을 열 수 없다";
//		return 0;
//	}
//
//	fin.seekg(0, ios::end);
//	int length = fin.tellg();
//	for (int i = 0; i < length; i++) {
//		fin.seekg(length - 1 - i, ios::beg); // 밑에 문제와 같은 오류 뜸
//		char c = fin.get();
//		cout << c;
//	}
//}


//#include <iostream> //실습12-3 : 입력받아서 하려고 했으나 오류 뜸
//#include <fstream>
//using namespace std;
//
//
//int main() {
//	char in[10];
//	cin >> in;
//	ofstream fout("input.txt"); //파일 쓰기
//	if (!fout) {
//		cout << "input.txt파일을 열 수 없다";
//		return 0;
//	}
//	fout << in << endl;
//	
//	ifstream fin;
//	fin.open("input.txt"); //파일 읽기
//	if (!fin) {
//		cout << "input.txt파일을 열 수 없다";
//		return 0;
//	}
//	//fin >> in; // 파일에 있는 문자열을 읽어 in 배열에 저장
//
//	fin.seekg(0, ios::end); //파일포인터를 파일의 끝에 옮기기
//	int length=fin.tellg();
//	for (int i = 0; i < length; i++) {
//		fin.seekg(length - (i+1), ios::beg);
//		int c = fin.get();
//		cout << (char)c;
//	}
//
//	fout.close();
//	fin.close();
//}