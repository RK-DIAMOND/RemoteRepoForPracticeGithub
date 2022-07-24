#include <iostream>
using namespace std;

char chaar[3][5] = {
    {'D', 'A', 'C', 'C', 'D'},
    {'S', 'D', 'F', 'A', 'E'},
    {'E', 'E', 'T', 'J', 'H'}
};

int check(char c){
    int i , j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 5; j++){
            if(chaar[i][j] == c){
                return 1;
            }
        }
    }
    return 0;

}


void input(){
    char in;
    cin >> in;
    if(check(in) == 1){
        cout << "있음";
    }
    else{
        cout << "없음";
    }
}


int main(){
    input();
    return 0;
}