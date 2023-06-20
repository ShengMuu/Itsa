#include <iostream>
#include <vector>
using namespace std;

int fib(int num);

int main() {
    
    int N;
    cin >> N;

    vector<int> arr(35, 0);
    for (int i = 0; i < 30; i++)  arr[i] = fib(i);

    for (int i = 0; i < N; i++) {
        
        int num;
        cin >> num;

        // 如果查看的費式數列向超過30
        if (num > 30 || num < 0)  continue;

        for (int i = 0; i < num; i++) {
            if (i == 0)  cout << arr[i];
            else  cout << " " << arr[i];
        }
        cout << endl;
    }
}

int fib(int num) {

    if (num == 0 || num == 1)  return 1;
    else  return fib(num-1)+fib(num-2);
}