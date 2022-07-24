#include <iostream>
using namespace std;

int main(){
    int arr[4][4] = { 0 };
    int i, j;
    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            arr[i][j] = 2*(1 + i + 4*j);
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}