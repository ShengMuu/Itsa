#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <math.h>
using namespace std;

int main() {
    string input;
    getline(cin, input);
    
    vector<double> nums;
    istringstream iss(input);

    double num ;
    while (iss >> num)  nums.push_back(num);

    // 每項平方和
    double sum = 0.0;
    for(int i = 0; i < nums.size(); i++) {
        sum += pow(nums[i], 2);
    }

    // 四射五入
    sum = round(sum * 1000000) / 1000000;

    // 輸出至小數點後6位
    cout << fixed;
    cout.precision(6);
    cout << sum << endl;
}