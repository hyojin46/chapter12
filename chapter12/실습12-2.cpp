//#include <iostream> //�ǽ�12-2
//#include <fstream>
//using namespace std;
//
//int main() {
//
//	ifstream fin;
//	fin.open("sample.txt");
//	if (!fin) {
//		cout << "������ �� �� �����ϴ�";
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
//	cout << "���Ͽ� ����� ������ ���� " << sum << endl;
//
//	fin.close();
//}