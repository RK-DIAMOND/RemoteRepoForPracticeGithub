#include <iostream>
using namespace std;

int main(){
    char chr[3][5] = {
        {'A', 'B', 'C', 'D', 'E'},
        {'E', 'A', 'B', 'A', 'B'},
        {'A', 'C', 'D', 'E', 'R'}
    };
    char chin = 'A';
    cin >> chin;

    int count = 0;
    int i = 0;
    int j = 0;

    for (i = 0; i < 3; i++){
        for (j = 0; j < 5; j++){
            if (chr[i][j] == chin){
                count++;
            }
        }
    }

    if (count >= 3){
        cout << "대발견";
    }
    else if (count >= 1 && count <= 2){
        cout << "발견";
    }
    else{
        cout << "미발견";
    }
    return 0;
}
