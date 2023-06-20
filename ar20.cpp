#include<iostream>
#include <vector>
using namespace std;

int main() {

    int n;
    cin >> n;
    vector<int> nums(n);
    vector<int> count(n, 0);

    // 將該數出現次數存取
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
        count[nums[i]]++;
    }

    // flag = 1 每個數只出現一次
    // flag = 0 有數字重複出現
    int flag = 1;
    for(int i = 0; i < n; i++) {
        if(count[i] > 1) {
            flag = 0;
            break;
        }
    }

    if(flag)  cout << "1" << endl;
    else  cout << "0" << endl;

}