//#include<iostream> // �ǽ�12-3
//#include<fstream>
//using namespace std;
//
//int main() {
//	ifstream fin;
//	fin.open("input2.txt"); //���� �б�
//	if (!fin) {
//		cout << "input.txt������ �� �� ����";
//		return 0;
//	}
//
//	fin.seekg(0, ios::end);
//	int length = fin.tellg();
//	for (int i = 0; i < length; i++) {
//		fin.seekg(length - 1 - i, ios::beg); // �ؿ� ������ ���� ���� ��
//		char c = fin.get();
//		cout << c;
//	}
//}


//#include <iostream> //�ǽ�12-3 : �Է¹޾Ƽ� �Ϸ��� ������ ���� ��
//#include <fstream>
//using namespace std;
//
//
//int main() {
//	char in[10];
//	cin >> in;
//	ofstream fout("input.txt"); //���� ����
//	if (!fout) {
//		cout << "input.txt������ �� �� ����";
//		return 0;
//	}
//	fout << in << endl;
//	
//	ifstream fin;
//	fin.open("input.txt"); //���� �б�
//	if (!fin) {
//		cout << "input.txt������ �� �� ����";
//		return 0;
//	}
//	//fin >> in; // ���Ͽ� �ִ� ���ڿ��� �о� in �迭�� ����
//
//	fin.seekg(0, ios::end); //���������͸� ������ ���� �ű��
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