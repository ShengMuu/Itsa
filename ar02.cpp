#include<iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr(6);
    int num;

    for(int i = 0; i < 6; i++)  cin >> arr[i];

    for(int i = 5; i >= 0; i--) {
        if(i == 5)  cout << arr[i];
        else  cout << " " << arr[i];
    }
    cout << endl;
}