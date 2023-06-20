#include <iostream>
#include <string>
#include <vector>
using namespace std;

string addBigIntegers(const string& num1, const string& num2);

int main() {
    int N;
    cin >> N;
    
    while (N-- > 0) {
        string num1, num2;
        cin >> num1 >> num2;
        
        // 大整数加法
        string sum = addBigIntegers(num1, num2);
        
        cout << sum << endl;
    }
}


string addBigIntegers(const string& num1, const string& num2) {

    // 取較大數及較少數
    string largerNum = (num1.size() >= num2.size()) ? num1 : num2;
    string smallerNum = (num1.size() >= num2.size()) ? num2 : num1;
    
    int carry = 0; // 進位
    int sum = 0;
    int diff = largerNum.size() - smallerNum.size(); // 位數差
    
    string result = "";
    
    // 从低位開始逐位相加 (右邊開始)
    for (int i = largerNum.size() - 1; i >= 0; i--) {
        int digit1 = largerNum[i] - '0'; // 較大數的當前位数字
        int digit2 = 0;                  // 較小數的當前位数字
        
        // 如果当前位之较小数有数字
        if (i - diff >= 0) {
            digit2 = smallerNum[i - diff] - '0';
        }
        
        sum = digit1 + digit2 + carry;
        carry = sum / 10;
        sum %= 10;
        
        // 將结果加到字串最前面
        result = to_string(sum) + result; 
    }
    
    // 如果最高位有進位
    if (carry > 0) {
        result = to_string(carry) + result;
    }
    
    return result;
}