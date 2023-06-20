#include <iostream>
#include <vector>
using namespace std;

void printMatrix(const vector<vector<int>>& matrix);

int main() {

    // 矩陣1
    int row1, col1;
    cin >> row1 >> col1;
    
    vector<vector<int>> arr1(row1, vector<int>(col1));
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            cin >> arr1[i][j];
        }
    }
    
    // 矩陣2
    int row2, col2;
    cin >> row2 >> col2;
    
    vector<vector<int>> arr2(row2, vector<int>(col2));
    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < col2; j++) {
            cin >> arr2[i][j];
        }
    }
    
    // 檢查矩陣尺寸是否相同
    if (row1 != row2 || col1 != col2)  return 0;
    
    // 矩阵相加
    vector<vector<int>> result(row1, vector<int>(col1));
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            result[i][j] = arr1[i][j] + arr2[i][j];  
        }
    }
    
    // output
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {

            if (j == 0)  cout << result[i][j];
            else  cout << " " << result[i][j];
        }
        cout << endl;
    }
}
