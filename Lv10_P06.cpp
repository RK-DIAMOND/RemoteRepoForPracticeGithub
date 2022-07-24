#include <iostream>
using namespace std;


void printData(int n){
    printf("%d\n", n);
}


void even(int n){
    printData(2 * n);
}


void odd(int n){
    printData(n - 10);
}


int main(){
    int a, b;
    cin >> a >> b;

    if ( (a/b) % 2 == 0){
        even(a/b);
    }
    else{
        odd(a/b);
    }

    printData(a + b);

    return 0;
}