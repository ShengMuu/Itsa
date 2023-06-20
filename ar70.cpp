#include <iostream>
#include <string>
using namespace std;

int main() {
    int year;
    cin >> year;

    // 生肖
    string zodiac[] = {"monkey", "rooster", "dog", "pig", "rat", "ox", "tiger",
                    "rabbit", "dragon", "snake", "horse", "goat"};

    // 正沖
    int x = year % 12;
    cout << zodiac[x] << endl;

    // 對沖
    int y = (x + 6) % 12;
    cout << zodiac[y] << endl;
}
