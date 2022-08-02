#include <iostream>
using namespace std;

char c[5];

void run(int x){
    if( x == 5){
        printf("\n");
        return;
    }
    cout << c[x];
    run(x + 1);
    cout << c[x];
}


int main(){
    cin >> c;
    run(0);
    return 0;
}
