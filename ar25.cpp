#include <iostream>
#include <string>
using namespace std;

int main() {

    string str;
    getline(cin, str);

    // 將對應 ASCII 字元的計數值加一
    int num;
    int result[128] = {0};
    for (int i = 0; i < str.length(); i++) {
        num = (int)str[i];
        result[num]++; 
    }

    for (int i = 127; i >= 0; i--) {
        if (result[i] != 0)
            cout << i << " " << result[i] << endl;
    }

    return 0;
}
