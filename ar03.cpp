#include<iostream>
#include<math.h>
using namespace std;

int main() {
    unsigned long long sum = 0;
    int num[10];

    // 输入6个数字並計算立方和
    for(int i = 0; i < 6; i++) {
        cin >> num[i];
        sum += num[i]*num[i]*num[i];
    }
    cout << sum << endl;
}
