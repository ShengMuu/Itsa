#include<iostream>
using namespace std;

int main(){
    int nums, arr[1000], temp;
    cin >> nums;
    for(int i = 0; i < nums; i++){
        cin >> arr[i];
    }

    //bubble sort (小 -> 大)
    for(int i  = 0; i < nums; i++){
        for(int j = 0; j < nums-i-1; j++){
            //swap
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for(int i = 0; i < nums; i++){
        cout << arr[i] << endl;
    }
}