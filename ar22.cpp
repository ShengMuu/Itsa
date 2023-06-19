#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int main() {

    //input
    vector<int> result(26, 0);
    char a[200];
    cin.getline(a, 200);

    //計算字母出現次數
    int i, temp;
    for (i = 0; a[i] != '\0'; i++) { 

        if (a[i] >= 'A' && a[i] <= 'Z') {
            temp = a[i] - 'A';
            result[temp]++;
        }

        if (a[i] >= 'a' && a[i] <= 'z') {
            temp = a[i] - 'a';
            result[temp]++;
        }
    }

    //output
    for (i = 0; i < 26; i++) {
        if (i == 0)
            cout << result[i];
        else
            cout << " " << result[i];
    }
    cout << endl;
}
