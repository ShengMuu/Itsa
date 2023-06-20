#include<iostream>
#include <vector>
using namespace std;

int main() {

    int nums, n, m;
    cin >> nums;

    int count = 0;
    while(count < nums) {

        cin >> n >> m;
        int up, down, right, left;

        //防止超出陣列的範圍
        //i,j從1開始,以n-1,m-1結束
        vector<vector<int>> graph(n+2, vector<int>(m+2, 0));
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                cin >> graph[i][j];
            }
        }

        // 設立邊框
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                if (graph[i][j] == 0)  cout << "_ ";
                else {
                    up = graph[i - 1][j];
                    down = graph[i + 1][j];
                    right = graph[i][j + 1];
                    left = graph[i][j - 1];

                    if (up == 0 || down == 0 || right == 0 || left == 0)  cout << "0 ";
                    else  cout << "_ ";
                }
            }
            cout << endl;
        }

        count++;

        if (count < nums) {
            cout << endl;
        }
    }
}