#include <iostream>
using namespace std;

int main(){
    int arr[4][4];
    int i = 0;
    int j = 0;
    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            cin >> arr[i][j];
        }
    }

    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            if (arr[i][j] == 0){
                printf("!");
            }
            else if (arr[i][j] % 2 == 0){
                printf("#");
            }
            else{
                printf("@");
            }
        }
        printf("\n");
    }
}