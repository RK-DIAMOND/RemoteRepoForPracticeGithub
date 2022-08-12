#include <iostream>
using namespace std;

char* isExist(char b[2][7], char c){
    for(int y = 0; y < 2; y++){
        for(int x = 0; x < 7; x++){
            if(b[y][x] == c) return "존재";
        }
    }
    return "없음";
}

int main(){
    char h[2][7] = {
        "A79TKQ", "MINCOD"
    };
    char p[2];
    for(int i = 0; i < 2; i++){
        cin >> p[i];
        printf("%c : ", p[i]);
        cout << isExist(h, p[i]);
        if(i < 1) printf("\n");
    }
return 0;} // End of main function
