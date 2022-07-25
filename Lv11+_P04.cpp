#include <iostream>
using namespace std;

int main(){
    char ar[3][5] = {
        {'a', 'b', 'a', 'c', 'z'},
        {'c', 't', 'a', 'c', 'd'},
        {'c', 'c', 'c', 'c', 'a'}
    };
    char in = ' ';
    cin >> in;
    int count = 0;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 5; j++){
            if (in == ar[i][j]){
                count++;
            }
        }
    }
    if (count >= 7){
        cout << "세상에";
    }
    else if (count >= 5){
        cout << "와우";
    }
    else if (count >= 3){
        cout << "이야";
    }
    else{
        cout << "이런";
    }

    return 0;
}