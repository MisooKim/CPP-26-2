#include <iostream>
using namespace std;

int main(){
    int age;
    cout << "나이를 입력하세요!!!!!";
    cin >> age;

    if (age <= 12)
        cout << "어린이"  << endl;
    else if (age <= 19)
        cout << "청소년" << endl;
    else
        cout << "성인" << endl;

    return 0;    
}
