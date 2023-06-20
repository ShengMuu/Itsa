#include <iostream>
using namespace std;

void change(int arr[], int size);

int main() {
    int numbers;
    cin >> numbers;

    // 取各位數
    int num[4] = {0};
    num[0] = numbers/1000;
    num[1] = (numbers/100) % 10;
    num[2] = (numbers/10) % 10;
    num[3] = numbers % 10;
    
    // 加密並互換位置 (02換 13換)
    change(num, 4);

    for (int i = 0; i < 4; i++)  cout << num[i];
    cout << endl;
}

void change(int arr[], int size) {
    for (int i = 0; i < size; i++)  arr[i] = (arr[i] + 7) % 10;

    int temp = arr[0];
    arr[0] = arr[2];
    arr[2] = temp;

    int temp2 = arr[1];
    arr[1] = arr[3];
    arr[3] = temp2;
}