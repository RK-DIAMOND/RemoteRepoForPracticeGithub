#include <iostream>
using namespace std;

void BBQ(int a, int b){
    cout << "합:" << a + b << endl;
    cout << "차:" << a - b << endl;
    cout << "곱:" << a * b << endl;
    cout << "몫:" << a / b;
}

int main(){
    int n1, n2;
    cin >> n1 >> n2;
    BBQ(n1, n2);

    return 0;
}