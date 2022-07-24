#include <iostream>
using namespace std;

int main(){
    int arr[3][4];
    int i = 0;
    int j = 0;
    int in = 0;
    cin >> in;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 4; j ++){
            if(j == in){
                arr[i][j] = 0;
            }
            else{
                arr[i][j] = 12 - 4*i - j;
            }
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

}