//#include <iostream> //����12-3
//#include <fstream>
//using namespace std;
//
//int main() {
//	char* file = "\\windows\\system.ini";
//	ifstream fin(file); // �б���
//	if (!fin) {
//		cout << file << " ���� ����" << endl;
//		return 0; 
//	}
//	int count = 0;
//	int c;
//	while ((c = fin.get()) != EOF) { // EOF�� ���� ������ ���� �б� 
//		cout << (char)c;
//		count++;
//	}
//	cout << "���� ����Ʈ ���� " << count << endl;
//	fin.close(); // ���� �ݱ�
//}