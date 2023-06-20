#include <iostream>
#include <string>
using namespace std;

int main() {
    
    int n, full, half, sum;
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        
        // 計票價總和
        cin >> full >> half;
        sum = full*250 + half*175;
        cout << sum << endl;
    }
}