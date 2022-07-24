#include <iostream>
using namespace std;

int input(){
    int in;
    scanf("%d", &in);
    return in;
}


void countDown(int n){
    while(n > 0){
        printf("%d ", n);
        n--;
    }
}


int main(){
    countDown(input());
    return 0;
}