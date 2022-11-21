//#include <iostream> //실습12-2
//#include <fstream>
//using namespace std;
//
//int main() {
//
//	ifstream fin;
//	fin.open("sample.txt");
//	if (!fin) {
//		cout << "파일을 열 수 없습니다";
//		return 0;
//	}
//
//	char su[10];
//	int sum = 0;
//
//	fin >> su;
//	for (int i = 0; i < 10; i++) {
//		su[i] = (int)i;
//	}
//
//	for (int i = 0; i < 10; i++) {
//		sum += su[i];
//	}
//	cout << "파일에 저장된 정수의 합은 " << sum << endl;
//
//	fin.close();
//}