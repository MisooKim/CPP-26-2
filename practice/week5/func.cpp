#include <iostream>
using namespace std;

int Sum(int value1, int value2 = 0){
    value1 = 5;
    int result = value1 + value2;
    return result;
}

int main(){
    int a = 2, b = 3;
    int value = Sum(a, b);
    cout << a << endl;
    cout << value << endl;

    value = Sum(a);
    cout << value << endl;

    return 0;
    
}