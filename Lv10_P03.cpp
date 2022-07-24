#include <iostream>
using namespace std;

int chicken(){
    int in;
    cin >> in;
    return in + 10;

}

char coke(){
    char in;
    cin >> in;
    return in;

}

void KFC(){
    int i = chicken();
    char c = coke();
    cout << i << c;

}

int main(){
    KFC();
    return 0;
}