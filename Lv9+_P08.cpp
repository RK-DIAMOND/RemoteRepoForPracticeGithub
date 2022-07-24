#include <iostream>
using namespace std;

void BBQ(int n){
    for(int i = 1; i <= n; i++){
        cout << i;
    }
}

void KFC(char c){
    for(int _ = 0; _ < 7; _++){
        cout << c;
    }
}

int main(){
    int in;
    cin >> in;
    if (in % 2 == 1){
        int in2;
        cin >> in2;
        BBQ(in2);
    }
    else{
        char in2;
        cin >> in2;
        KFC(in2);
    }

}