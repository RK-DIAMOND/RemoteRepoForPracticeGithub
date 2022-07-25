#include <iostream>
using namespace std;


int sum(int a, int b){
    return a + b;
}


int comp(int a, int b){
    if (a - b >= 0){
        return a - b;
    }
    else{
        return b - a;
    }
}


void print(int a, int b){
    printf("합:%d\n차:%d", a, b);
}


int main(){
    int in1, in2;
    cin >> in1 >> in2;
    print(sum(in1, in2), comp(in1, in2));
    return 0;
}