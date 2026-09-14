#include <iostream>
#include <string>
using namespace std;

int main(){
    string s1 = "Apple";
    string s2;

    s2 = s1 + " " + to_string(10) + "ea";
    cout << s2 << endl;
    return 0;
}