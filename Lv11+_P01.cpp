#include <iostream>
using namespace std;

int main(){
    char car[6] = { 'D', 'F', 'G', 'D', 'A', 'Q' };
    char ch1, ch2;
    cin >> ch1 >> ch2;
    bool flag = false;
    for (int i = 0; i < 6; i++){
        if (ch1 <= car[i] && car[i] <= ch2){
            flag = true;
            break;
        }
    }
    if (flag){
        cout << "발견!!!";
    }
    else{
        cout << "미발견!!!";
    }

    return 0;
}