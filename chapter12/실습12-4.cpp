//#include <iostream> //�ǽ�12-4
//#include <fstream>
//using namespace std;
//
//int main() {
//	char su[10],name[10],tell[20],email[20];
//	while (true) {
//		cout << "��ȣ�� �Է��ϼ��� : ";
//		cin >> su;
//		cout << "�̸��� �Է��ϼ��� : ";
//		cin >> name;
//		cout << "��ȭ��ȣ�� �Է��ϼ��� : ";
//		cin >> tell;
//		cout << "�̸����ּҸ� �Է��ϼ��� : ";
//		cin >> email;
//
//		ofstream fout("input.txt"); //���� ����
//		if (!fout) {
//			cout << "input.txt������ �� �� ����";
//			return 0;
//		}
//		fout << su << endl;
//		fout << name << endl;
//		fout << tell << endl;
//		fout << email << endl;
//
//		ifstream fin;
//		fin.open("input.txt"); //���� �б�
//		if (!fin) {
//			cout << "input.txt������ �� �� ����";
//			return 0;
//		}
//		fin >> su;
//		fin >> name;
//		fin >> tell;
//		fin >> email;
//
//		char num;
//		cout << "�����Ͻðڽ��ϱ�? (Y/N) ";
//		cin >> num;
//		switch (num) {
//		case 'N': case 'n':
//			cout << "��ȣ" << "\t" << "�̸�" << "\t" << "��ȭ��ȣ" << "\t" << "�̸����ּ�" << endl;
//			cout << su << "\t" << name << "\t" << tell << "\t" << email << endl;
//			break;
//		case 'Y': case 'y':
//			return 0;
//		}
//	}
//		
//}