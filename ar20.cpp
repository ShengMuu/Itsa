#include<iostream>
#include <vector>
using namespace std;

int main() {

    int n;
    cin >> n;
    vector<int> nums(n);
    vector<int> count(n, 0);
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
        count[nums[i]]++;
    }

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