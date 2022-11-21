//#include <iostream> //실습12-4
//#include <fstream>
//using namespace std;
//
//int main() {
//	char su[10],name[10],tell[20],email[20];
//	while (true) {
//		cout << "번호를 입력하세요 : ";
//		cin >> su;
//		cout << "이름을 입력하세요 : ";
//		cin >> name;
//		cout << "전화번호를 입력하세요 : ";
//		cin >> tell;
//		cout << "이메일주소를 입력하세요 : ";
//		cin >> email;
//
//		ofstream fout("input.txt"); //파일 쓰기
//		if (!fout) {
//			cout << "input.txt파일을 열 수 없다";
//			return 0;
//		}
//		fout << su << endl;
//		fout << name << endl;
//		fout << tell << endl;
//		fout << email << endl;
//
//		ifstream fin;
//		fin.open("input.txt"); //파일 읽기
//		if (!fin) {
//			cout << "input.txt파일을 열 수 없다";
//			return 0;
//		}
//		fin >> su;
//		fin >> name;
//		fin >> tell;
//		fin >> email;
//
//		char num;
//		cout << "종료하시겠습니까? (Y/N) ";
//		cin >> num;
//		switch (num) {
//		case 'N': case 'n':
//			cout << "번호" << "\t" << "이름" << "\t" << "전화번호" << "\t" << "이메일주소" << endl;
//			cout << su << "\t" << name << "\t" << tell << "\t" << email << endl;
//			break;
//		case 'Y': case 'y':
//			return 0;
//		}
//	}
//		
//}