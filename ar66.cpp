#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string input;
    while (getline(cin, input)) {
        
        stringstream ss(input);
        string card;
        int result = 0;
        
        // 撲克數字總和
        while (ss >> card) {
            if (card == "A")  result += 14;
            else if (card == "K")  result += 13;
            else if (card == "Q")  result += 12;
            else if (card == "J")  result += 11;
            // 字串轉整數
            else  result += stoi(card);
        }
        cout << result << endl;
    }
}
