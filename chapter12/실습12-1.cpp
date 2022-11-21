//#include <fstream> //실습12-1
//#include <iostream>
//using namespace std;
//
//int main() {
//    int su[10];
//
//    for (int i = 0; i < 10; i++) {
//        su[i] = i;
//        cout << su[i];
//        cout << " ";
//    }
//
//    ofstream fout("sample.txt");
//    if (!fout) { //열기 실패
//        cout << "sample.txt파일을 열 수 없다";
//        return 0;
//    }
//
//    fout << su << endl;
//    
//    fout.close();
//}