#include <iostream>
#include <cstring>
using namespace std;

int main() {

    char a[80];
    cin >> a;

    //判斷字串迴文
    int size = strlen(a);
    int flag = 1;
    for (int i = 0; i < size / 2; i++) {
        if (a[i] != a[size - 1 - i]) {
            cout << "NO" << endl;
            flag = 0;
            break;
        }
    }
    if (flag)  cout << "YES" << endl;
}
