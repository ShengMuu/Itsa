#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int arr[6];
    for (int i = 0; i < 6; i++) {
        cin >> arr[i];
    }

    // 6x6 九九乘法表
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++){
            if (j != 0)  cout << " ";

            // 默認為使用 0 填充 (3格)
            cout << setw(3) << setfill('0') << arr[i]*arr[j];
        }
        cout << endl;
    }
}
