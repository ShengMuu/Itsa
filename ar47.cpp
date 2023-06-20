#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

void reversePrint(const vector<string>& nums);

int main() {
    string input;
    while (getline(cin, input)) {

        istringstream iss(input);
        vector<string> nums;
        string num;

        while (iss >> num)  nums.push_back(num);
        
        // 以相反順序輸出陣列元素
        reversePrint(nums);
    }
}

void reversePrint(const vector<string>& nums) {
    for (int i = nums.size() - 1; i >= 0; i--) {
        
        if (i != 0)  cout << nums[i] << " ";
        else  cout << nums[i] << endl;
    }
}
