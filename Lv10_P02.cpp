#include <iostream>
using namespace std;

int main(){
    int arr[4][4] = { 0 };
    int in = -1;
    cin >> in;
    if(in % 2 == 0){
        for(int i = 0; i < 4; i++){
            arr[i][i] = i + 1;
        }
    }
    else{
        for(int i = 0; i < 4; i++){
            arr[i][3 - i] = i + 1;
        }
    }

    for(int i = 0; i < 16; i++){
        printf("%d ", arr[i/4][i%4]);
        if(i % 4 == 3){
            printf("\n");
        }
    }

}