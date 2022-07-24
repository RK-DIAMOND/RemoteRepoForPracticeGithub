#include <iostream>
using namespace std;

int one(){
    int in;
    cin >> in;
    return in;
}

char two(){
    char chin;
    cin >> chin;
    return chin;
}

int main(){
    int outi = one();
    char outc = two();
    cout << outi << outc;

    return 0; 
}