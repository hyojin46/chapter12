//#include <iostream> //예제12-3
//#include <fstream>
//using namespace std;
//
//int main() {
//	char* file = "\\windows\\system.ini";
//	ifstream fin(file); // 읽기모드
//	if (!fin) {
//		cout << file << " 열기 오류" << endl;
//		return 0; 
//	}
//	int count = 0;
//	int c;
//	while ((c = fin.get()) != EOF) { // EOF를 만날 때까지 문자 읽기 
//		cout << (char)c;
//		count++;
//	}
//	cout << "읽은 바이트 수는 " << count << endl;
//	fin.close(); // 파일 닫기
//}