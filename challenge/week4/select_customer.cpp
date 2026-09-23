#include <iostream>
#include <string>
using namespace std;

int main(){
    const int maxPeople = 3;
    string names[maxPeople];
    int ages[maxPeople];
    for(int i = 0; i < maxPeople; i++){
        cout << "사람 " << i << "의 이름: ";
        cin >> names[i];
        cout << "사람 " << i << "의 나이: ";
        cin >> ages[i];
    }

    int agethreshold;
    cout << "특정 나이 입력";
    cin >> agethreshold;

    cout << agethreshold << "세 이상인 사람들";

    int larger = 0;
    for (int i = 0; i < maxPeople; i++){
        if(ages[i] > agethreshold){
            cout << names[i] << "(" << ages[i] << ")" << endl;
            larger ++;
        }
    }
    if (larger == 0){
        cout << "아무도 없다";
    }
    return 0;
}