#include <iostream>
using namespace std;

int main(){
    const int numCell = 3;
    char board[numCell][numCell]{};
    int x, y;

    for (x = 0; x < numCell; x++){
        for (y = 0; y < numCell; y++){
            board[x][y] = ' ';
        }
    }

    int k = 0;
    char currentUser = 'X';

    while(true){
        switch(k%2){
        case 0:
            cout << k%2 + 1 << "번 유저(X)의 차례입니다: " ;
            currentUser = 'X';
            break;
        case 1:
            cout << k%2 + 1 << "번 유저(O)의 차례입니다: " ;
            currentUser = 'O';
            break;
        }
        
        cout << "(x, y) 좌표를 입력하세요: ";
        cin >> x >> y;

        if (x >= numCell || y >= numCell){
            cout << x << ", " << y <<": ";
            cout << "x와 y 둘 중 하나가 칸을 벗어났습니다 " << endl;
            continue;
        }
        if (board[x][y] != ' '){
            cout << x << ", " << y << ": 이미 돌이 차있습니다 " << endl;
            continue;
        }

        board[x][y] = currentUser;

        for (int i = 0; i < numCell; i++){
            cout << "---|---|---" << endl;
            for (int j = 0 ; j < numCell; j++){
                cout << board[i][j];
                if(j == numCell -1){
                    break;
                }
                cout << "  |";
            }
            cout << endl;
        }
        cout << "---|---|---" << endl;
        k++;
    }
    return 0;
}