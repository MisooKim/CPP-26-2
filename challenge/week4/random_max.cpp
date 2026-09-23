#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    const int numCell = 10;
    int numList[numCell][numCell];
    
    for(int i = 0 ; i <numCell; i++){
        for (int j = 0 ; j < numCell; j++){
            numList[i][j] = rand()%1000;
            cout << i << ", " << j << ":" << numList[i][j] << endl;
        }
    }

    cout << endl;

    int max = 0;
    int maxI;
    int maxJ;

    for(int i = 0 ; i <numCell; i++){
        for (int j = 0 ; j < numCell; j++){
            if (numList[i][j] > max){
                max = numList[i][j];
                maxI = i;
                maxJ = j;
            }
        }
    }

    cout << "가장 큰값 " << max << endl;
    cout << " i와 j "<< maxI << " " << maxJ  << endl;
    cout << "결과" << numList[maxI][maxJ] << endl;
}