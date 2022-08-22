#include <iostream>
#define _NO_MORE_HARD_CODING
using namespace std;

char arr[2][2][3] = {
    'A', 'T', 'B', 'C', 'C', 'B', 'A', 'A', 'A', 'B', 'B', 'C'
};

bool isin(char m[2][2][3], char in){
    for(int i = 0; i < 2; i++) for(int y = 0; y < 2; y++) for(int x = 0; x < 3; x++) if(m[i][y][x] == in) return true;
    return false;
}

int main(){
    char in;
    cin >> in;
    if(isin(arr, in)) cout << "발견";
    else cout << "미발견";
return 0;}
