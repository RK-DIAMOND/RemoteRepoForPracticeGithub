#include <iostream>
using namespace std;

void checkChar(char x){
    if (x >= 'A' && x <= 'Z'){
        cout << "대";
        // cout << '대'; prints 15436928 instead of 대
    }
    else if(x >= 'a' && x <= 'z'){
        cout << "소";
        // cout << '소' prints 15500940 instead of 소
    }
}

int main(){
    char arr[5];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
    int i = 0;
    for (i = 0; i < 5; i++){
        checkChar(arr[i]);
    }
    return 0;
}