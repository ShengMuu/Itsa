#include <iostream>
#include <string>
#include <sstream>
#include <math.h>
using namespace std;

int main() {

    string input;
    getline(cin, input);
    
    istringstream iss(input);
    string sub_str;
    double type, time;
    int count = 0;
    
    // string 轉 double
    while (getline(iss, sub_str, ',')) {
        if (count == 0) {
            type = stod(sub_str);
        } else if (count == 1) {
            time = stod(sub_str);
        }
        count++;
    }
    
    double fee = 0.0; 
    if (type == 186) {
        if (time * 0.09 < type)  fee = type;
        else {
            if (time * 0.09 > 2 * type)  fee = round(time * 0.09) * 0.8;
            else  fee = round(time * 0.09) * 0.9;
        }
    }
    else if (type == 386) {
        if (time * 0.08 < type)  fee = type;
        else {
            if (time * 0.08 > 2 * type)  fee = round(time * 0.08) * 0.7;
            else  fee = round(time * 0.08) * 0.8;
        }
    }
    else if (type == 586) {
        if (time * 0.07 < type)  fee = type;
        else {
            if (time * 0.07 > 2 * type)  fee = round(time * 0.07) * 0.6;
            else  fee = round(time * 0.07) * 0.7;
        }
    }
    else if (type == 986) {
        if (time * 0.06 < type)  fee = type;
        else {
            if (time * 0.06 > 2 * type)  fee = round(time * 0.06) * 0.5;
            else  fee = round(time * 0.06) * 0.6;
        }
    }
    
    // 輸出至小數點後0位
    cout << fixed;
    cout.precision(0);
    cout << fee << endl;
}
