//#include <iostream> //����12-4
//#include <fstream>
//using namespace std;
//int main() {
//	char* firstFile = "student.txt";
//	char* secondFile = "windows\\system.ini";
//
//	fstream fout(firstFile, ios::out | ios::app); // ���� ���� ���� ����
//	if (!fout) { // ���� ���� �˻�
//		cout << firstFile << " ���� ����";
//		return 0;
//	}
//
//	fstream fin(secondFile, ios::in); // �б� ���� ���� ����
//	if (!fin) { // ���� ���� �˻�
//		cout << secondFile << " ���� ����";
//		return 0;
//	}
//
//	int c;
//	while ((c = fin.get()) != EOF) { // ���� ������ ���� �б�
//		fout.put(c); // ���� ���� ���
//	}
//
//	fin.close(); // �Է� ���� �ݱ�
//	fout.close(); // ��� ���� �ݱ�
//}