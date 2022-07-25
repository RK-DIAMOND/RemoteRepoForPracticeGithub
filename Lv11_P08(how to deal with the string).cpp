#include <iostream>
using namespace std;

int main(){
    char w[] = "StructPointer";
//    char w[30] = {'S','t','r','u','c','t','P','o','i','n','t','e','r'};
    char in = ' ';
    cin >> in;
    bool flag = false;
    for (int i = 0; i < 13; i++){
        if (in == w[i]){
            flag = true;
            break;
        }
    }

    // cout << w[4]; // c
    // cout << w[12]; // r
    // cout << w[13]; //
    // cout << w[20]; //
    // cout << "\n";

    if (flag){
        cout << "발견";
    }
    else{
        cout << "미발견";
    }

    return 0;
}