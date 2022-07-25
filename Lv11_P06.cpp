#include <iostream>
using namespace std;

int main(){
    int ar[7] = { 3, 4, 1, 3, 2, 7, 3 };
    int in;
    cin >> in;

    bool flag = false;

    for (int i = 0; i < 7; i++){
        if (in == ar[i]){
            flag = true;
            break;
        }
    }

    if(flag){cout << "발견";}
    else{cout << "미발견";}
    return 0;
}