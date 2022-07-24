#include <iostream>
using namespace std;
char C[2][3];

void input(){
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            cin >> C[i][j];
        }
    }
}


int findUpper(char pp[2][3]){
    int i = 0;
    int j = 0;
    int result = 0;
    for (i = 0; i < 2; i++){
        for (j = 0; j < 3; j++){
            if (pp[i][j] >= 'A' && pp[i][j] <= 'Z'){
                result++;
            }
        }
    }

    return result;
}


int findLower(char pp[2][3]){
    int i = 0;
    int j = 0;
    int result = 0;
    for (i = 0; i < 2; i++){
        for (j = 0; j < 3; j++){
            if (pp[i][j] >= 'a' && pp[i][j] <= 'z'){
                result++;
            }
        }
    }

    return result;
}


int main(){
    input();
    printf("대문자%d개\n소문자%d개", findUpper(C), findLower(C));

    return 0;
}