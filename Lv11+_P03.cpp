#include <iostream>
using namespace std;

int main(){
    char ar[8] = {'A', '1', '1', '1', '5', 'A', 'w', 'z'};
    char in = ' ';
    cin >> in;
    int count = 0;
    for (int i = 0; i < 6; i++){
        if (ar[i] == in){
            count++;
        }
    }
    switch(count){
    case 0:
        cout << "NOTHING";
        break;
    case 1:
        cout << "ONE";
        break;
    case 2:
        cout << "TWO";
        break;
    default:
        cout << "THREE";
    }

    return 0;
}