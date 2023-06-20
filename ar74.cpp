#include <iostream>
#include <string>
using namespace std;

int main() {

    string date[][3] = {{"123", "Tom", "DTGD"},
                        {"456", "Cat", "CSIE"},
                        {"789", "Nana", "ASIE"},
                        {"321", "Lim", "DBA"},
                        {"654", "Won", "FDD"}};

    int N;
    cin >> N;
    for (int count = 0; count < N; count++) {

        // 查詢第幾列內容
        int field;
        cin >> field;

        // 內容
        string value;
        cin >> value;
        
        // 若找到該內容 則印出該列
        int row = 0;
        for (int i = 0; i < sizeof(date) / sizeof(date[0]); i++) {
            if (value == date[i][field - 1]) {
                row = i;
                break;
            }
        }
        
        cout << date[row][0] << " " << date[row][1] << " " << date[row][2] << endl;
    }
}
