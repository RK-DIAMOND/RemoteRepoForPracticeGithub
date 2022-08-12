#define _NO_MORE_HARD_CODING
#define MAX 4
#include <iostream>
using namespace std;

int main(){
    int arr[2][MAX];
    int cursor[2] = { 0, };
    for(int y = 0;  y < 2; y++) for(int x = 0; x < MAX; x++) cin >> arr[y][x];
    while(1){
        if(arr[0][cursor[0]] < arr[1][cursor[1]]){
            printf("%d ", arr[0][cursor[0]]);
            cursor[0]++;
        }
        else{
            printf("%d ", arr[1][cursor[1]]);
            cursor[1]++;
        }
        for(int q = 0; q < 2; q++){
            if(cursor[q] == MAX){
                for(int i = cursor[1-q]; i < MAX; i++){
                    printf("%d ", arr[1-q][i]);
                }
                return 0;
            }
        }
    }
return 0;} // End of main function
