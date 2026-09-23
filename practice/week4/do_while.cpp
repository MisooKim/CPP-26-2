#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    do {
            cout << "문자열을 입력하세요~" ;
            getline(cin, str);
            cout << "사용자 입력은 -> " << str << endl;

    }while(str != "종료");
    return 0;
}
