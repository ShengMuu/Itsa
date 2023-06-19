#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int main() {

    string input;
    while (getline(cin, input)) {
        istringstream iss(input);
        vector<int> numbers;

        int num;
        while (iss >> num)  numbers.push_back(num);

        int size = numbers.size();
        double average = 0;
        for (int i = 0; i < size; i++)  average += numbers[i];
        average /= size;

        cout << "Size: " << size << endl;
        // 輸出至小數點後3位
        cout << fixed;
        cout.precision(3);
        cout << "Average: " << average << endl;
    }
}
