#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

int main()
{
    int m, n, n1, n2, p;

    // 矩陣1
    cin >> m >> n1;
    vector<vector<int>> A(m, vector<int>(n1));
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n1; j++){
            cin >> A[i][j];
        }
    }

    // 矩陣2
    cin >> n2 >> p;
    vector<vector<int>> B(n2, vector<int>(p));
    for (int i = 0; i < n2; i++){
        for (int j = 0; j < p; j++){
            cin >> B[i][j];
        }
    }
    
    // 檢查矩陣可否相乘
    if (n1 != n2)  return 0;
    n = n1;

    // 矩阵相乘
    vector<vector<int>> C(m, vector<int>(p, 0));
    for (int i = 0; i < m; i++){
        for (int j = 0; j < p; j++){
            for (int k = 0; k < n; k++){
                C[i][j] += (A[i][k] * B[k][j]);
            }
        }
    }
    
    // output
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            if (j == 0)  cout << C[i][j];
            else  cout << " " << C[i][j];
        }
        cout << endl;
    }
}
