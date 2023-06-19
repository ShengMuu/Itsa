#include <iostream>
using namespace std;

int main() {

    int month, day;
    while (cin >> month >> day) { 

        if (month == 1) {
            if (day >= 21)
                cout << "Aquarius" << endl;
            else
                cout << "Capricorn" << endl;
        }
        
        else if (month == 2) {
            if (day >= 19)
                cout << "Pisces" << endl;
            else
                cout << "Aquarius" << endl;
        }
        
        else if (month == 3) {
            if (day >= 21)
                cout << "Aries" << endl;
            else
                cout << "Pisces" << endl;
        }
        
        else if (month == 4) {
            if (day >= 21)
                cout << "Taurus" << endl;
            else
                cout << "Aries" << endl;
        }
        
        else if (month == 5) {
            if (day >= 22)
                cout << "Gemini" << endl;
            else
                cout << "Aries" << endl;
        }
        
        else if (month == 6) {
            if (day >= 22)
                cout << "Cancer" << endl;
            else
                cout << "Gemini" << endl;
        }
        
        else if (month == 7) {
            if (day >= 23)
                cout << "Leo" << endl;
            else
                cout << "Cancer" << endl;
        }
        
        else if (month == 8) {
            if (day >= 24)
                cout << "Virgo" << endl;
            else
                cout << "Leo" << endl;
        }
        
        else if (month == 9) {
            if (day >= 24)
                cout << "Libra" << endl;
            else
                cout << "Virgo" << endl;
        }
        
        else if (month == 10) {
            if (day >= 24)
                cout << "Scorpio" << endl;
            else
                cout << "Libra" << endl;
        }
        
        else if (month == 11) {
            if (day >= 23)
                cout << "Sagittarius" << endl;
            else
                cout << "Scorpio" << endl;
        }
        
        else if (month == 12) {
            if (day >= 22)
                cout << "Capricorn" << endl;
            else
                cout << "Sagittarius" << endl;
        }
    }
}
