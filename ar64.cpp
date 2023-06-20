#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;
    int board[3][3];
    bool isconnect = false;
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> board[i][j];
        }
    }
    
    // 檢查行
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == n && board[i][1] == n && board[i][2] == n) {
            cout << "All " << n << "'s on row " << i << endl;
            isconnect = true;
        }
    }
    
    // 檢查列
    for (int j = 0; j < 3; j++) {
        if (board[0][j] == n && board[1][j] == n && board[2][j] == n) {
            cout << "All " << n << "'s on column " << j << endl;
            isconnect = true;
        }
    }
    
    // 檢查對角線 (diagonal)
    if (board[0][0] == n && board[1][1] == n && board[2][2] == n) {
        cout << "All " << n << "'s on diagonal" << endl;
        isconnect = true;
    } 
    
    // 檢查對角線 (subdiagonal)
    if (board[0][2] == n && board[1][1] == n && board[2][0] == n) {
        cout << "All " << n << "'s on subdiagonal" << endl;
        isconnect = true;
    }
    
    if (!isconnect)  cout << "There is no line with all " << n << endl;
}
