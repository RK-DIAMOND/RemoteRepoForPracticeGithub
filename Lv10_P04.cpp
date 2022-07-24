#include <iostream>
using namespace std;

char getChar(){
    char a, b;
    cin >> a >> b;
    int na = (int)(a);
    int nb = (int)(b);

    if (na > nb){
        return a;
    }
    else{
        return b;
    }
}

int main(){
    cout << getChar();
    return 0;
}