#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<char> chars(n);
    vector<int> character(26, 0);

    for (int i = 0; i < n; i++)  cin >> chars[i];

    // 更新字母出現次數
    for (int i = 0; i < n; i++) {
        if (chars[i] >= 'a' && chars[i] <= 'z') {
            character[chars[i] - 'a']++;
        }
    }

    // 輸出出現過的字母及次數
    for (int i = 0; i < 26; i++) {
        if (character[i] != 0) {
            cout << char(i + 'a') << " " << character[i] << endl;
        }
    }

    return 0;
}
