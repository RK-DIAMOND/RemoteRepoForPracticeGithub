#include <iostream>
using namespace std;
int arr[2][3] = { 0 };

void input(){
    int in = 0;
    int i = 0;
    for (i = 0; i < 6; i++){
    cin >> in;
    arr[i / 3][i % 3] = in;
    }
}


int process(){
    int sum = 0;
    int i = 0;
    for (i = 0; i < 6; i++){
        sum += arr[i / 3][i % 3];
    }
    return sum;
}


void output(int a){
    cout << a;
}


int main(){
    input();
    output(process());
}