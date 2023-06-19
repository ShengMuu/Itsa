#include<iostream>
#include <vector>
using namespace std;

int main() {
    int N, m, n, k;
    cin >> N;
    for(int num = 0; num < N; num++) {

        cin >> m >> n >> k;
        int sum = 0, max = 0;
        vector<vector<int>> arr(m, vector<int>(n));

        for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
                cin >> arr[i][j];
            }
        }

        // 如果子矩陣大小為1，找出整個矩陣中的最大值
        if (k == 1) {
            for (int i = 0; i < m; i++) {
                for (int j = 0; j < n; j++) {
                    if (arr[i][j] > max)
                        max = arr[i][j];
                }
            }
        }
        // 遍歷矩陣，計算每個子矩陣的總和並找出最大值
        else {
            for (int i = 0; i <= m - k; i++) {
                for (int j = 0; j <= n - k; j++) {
                    sum = 0;
                    // 遍歷子矩陣中的元素，計算總和
                    for (int x = i; x < i + k; x++) {
                        for (int y = j; y < j + k; y++) {
                            sum += arr[x][y];
                        }
                    }
                    if (sum > max)  max = sum;
                }
            }
        }
        cout << max << endl;
    }
}