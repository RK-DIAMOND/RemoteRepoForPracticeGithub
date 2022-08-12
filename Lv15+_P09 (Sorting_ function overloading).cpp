#include <iostream>
#include <algorithm>
#define MAX 2147483647
using namespace std;

int sort(int *a, int *b){
    if(*a > *b){
        char temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main(){
    int mat[2][3];
    int arr[6];
    for(int y = 0; y < 2; y++){
        for(int x = 0; x < 3; x++){
            cin >> mat[y][x];
            arr[x+3*y] = mat[y][x];
        }
    }
    for(int l = 0; l < 5; l++){
        for(int r = l + 1; r < 6; r++){
            sort(&arr[l], &arr[r]);
        }
    }
    for(int i = 0; i < 6; i++){
        mat[i / 3][i % 3] = arr[i];
    }
    for(int y = 0; y < 2; y++){
        for(int x = 0; x < 3; x++){
            printf("%d ", mat[y][x]);
        }
        printf("\n");
    }

return 0;} // End of main function