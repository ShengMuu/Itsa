#include <iostream>
#include <string>
using namespace std;

int main() {
    string date[][3] = {{"123", "456", "9000"},
                        {"456", "789", "5000"},
                        {"789", "888", "6000"},
                        {"336", "558", "10000"},
                        {"775", "666", "12000"},
                        {"566", "221", "7000"}};

    int N;
    cin >> N;

    for (int count = 0; count < N; count++) {
        
        // 帳戶 = 1, 密碼 = 2
        string account, password;
        cin >> account >> password;

        // 帳號存在且密碼正確 列印擁有金額
        string money = "-1";
        for (int i = 0; i < sizeof(date) / sizeof(date[0]); i++) {
            if (account == date[i][0] && password == date[i][1]) {
                money = date[i][2];
                break;
            }
        }
        
        if (money != "-1")  cout << money << endl;
        else  cout << "error" << endl;
    }
}