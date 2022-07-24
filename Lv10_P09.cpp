#include <iostream>
using namespace std;

int main(){
    int arr[4][4];
    int i , j;
    for (i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            arr[i][j] = 13 + i - 4*j;
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}