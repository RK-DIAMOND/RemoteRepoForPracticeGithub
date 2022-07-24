#include <iostream>
using namespace std;

int main(){
    int arr[5][5] = { 0 };
    int i, j;
    int in;
    cin >> in;

    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            if(i == in){
                arr[i][j] = in;
            }
            else{
                arr[i][j] = 21 + i - 5*j;
            }
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}