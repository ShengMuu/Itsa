#include<iostream>
using namespace std;

int main(){
    int size, level, i, j;
    cin >> size;

    //正三角
    level = (size+1)/2;
    for(i = 0; i < level; i++) {
        for(j = i; j < size-1; j++)  cout << "@";
        for(j = 0; j < 2*i+1; j++)  cout << "*";
        for(j = i; j < size-1; j++)  cout << "@";
        cout << endl;
    }

    //倒三角(不包括底層)
    level -= 2;
    for(i = 1; i <= level; i++) {
        for(j = 0; j < level-i+1; j++)  cout << "@";
        
        for(j = 0; j < 2*i+1; j++)  cout << "*";
        for(j = 0; j < 2*(level-i)+1; j++)  cout << "@";
        for(j = 0; j < 2*i+1; j++)  cout << "*";
        for(j = 0; j < level-i+1; j++)  cout << "@";
        cout << endl;
    }
    for(i = 0; i < 2*size-1; i++)  cout << "*";
    cout << endl;
}