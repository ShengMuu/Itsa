#include <iostream>
#include <string>
using namespace std;

string encryptText(string text, int offset);

int main() {

    string text;
    int offset;

    getline(cin, text);
    cin >> offset;

    // 忽略下一行的換行符
    cin.ignore();
    // 防止超過 ASCII 範圍
    offset = offset % 26;

    // 加密後字串
    string encryptedText = encryptText(text, offset);
    cout << encryptedText << endl;
}

string encryptText(string text, int offset) {

    string encryptedText = "";
    char base, encryptedChar;

    for (char& c : text) {
        // 判斷是否為字母
        if (isalpha(c)) {
            // 判斷大小寫
            base = isupper(c) ? 'A' : 'a';
            encryptedChar = (c - base + offset) % 26 + base;
            encryptedText += encryptedChar;
        }
        // 判斷是否為數字
        else if (c >= '0' && c <= '9') {
            base = '0';
            encryptedChar = (c - base + offset) % 10 + base;
            encryptedText += encryptedChar;
        }
        else  encryptedText += c;
    }
    return encryptedText;
}
