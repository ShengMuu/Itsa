#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

int main() {
    string line;
    while (getline(cin, line)) {
        vector<string> arr;
        istringstream iss(line);
        string s;

        // 使用空格分割字符串
        while (iss >> s) {
            arr.push_back(s);
        }

        // 逆序输出分割后的字符串
        for (int i = arr.size() - 1; i >= 0; i--) {
            if (i == arr.size() - 1)
                cout << arr[i];
            else
                cout << " " << arr[i];
        }
        cout << endl;
    }
}
