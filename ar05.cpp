#include<iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    vector<int> start(30), end(30), time(24, 0);

    cin >> n;
    for(int i = 0; i < n; i++)  cin >> start[i] >> end[i];

    //判斷當時時段至多需要幾倆車
    for (int i = 0; i < n; i++) {
        for(int j = start[i]; j < end[i]; j++) {
            time[j]++;
        }
    }

    //搜尋最多車輛
    int max = time[0];
    for(int i = 1; i < 24; i++) {
        if(time[i] > max)  max = time[i];
    }

    cout << max << endl;
}