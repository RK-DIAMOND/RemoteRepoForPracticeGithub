#include <iostream>
using namespace std;

int jndex(int n){
    if(n >= 0 && n <= 3){
        return 0;
    }
    else{
        return 1;
    }
}

int main(){
    char arr[3][6];
    char ch[2] = { 'A', 'A' };
    cin >> ch[0] >> ch[1];
    int i = 0;
    int j = 0;
    for (i = 0; i < 3; i++){
        for (j = 0; j < 6; j++){
            arr[i][j] = ch[jndex(j)];
            printf("%c", arr[i][j]);
        }
        printf("\n");
    }

return 0;}