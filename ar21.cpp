#include <iostream>
#include <math.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    double chinese = 0.0, english = 0.0, math = 0.0;
    double average_all = 0.0, average_chinese = 0.0, average_english = 0.0, average_math = 0.0;

    // 累加分數
    for (int i = 0; i < n; i++) {
        cin >> chinese >> english >> math;

        average_chinese += chinese;
        average_english += english;
        average_math += math;
    }

    average_all = average_chinese + average_english + average_math;
    
    // 計算平均分數
    average_all /= (n * 3);
    average_chinese /= n;
    average_english /= n;
    average_math /= n;

    // 四捨五入
    average_all = round(average_all * 10) / 10;
    average_chinese = round(average_chinese * 10) / 10;
    average_english = round(average_english * 10) / 10;
    average_math = round(average_math * 10) / 10;

    // 輸出至小數點後1位
    cout << fixed;
    cout.precision(1);
    cout << average_all << " " << average_chinese << " ";
    cout << average_english << " " << average_math << endl;
}
