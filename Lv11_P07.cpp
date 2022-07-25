#include <iostream>
using namespace std;

int main(){
    int arr[7] = { 0 };
    for (int i = 0; i < 7; i++){
        cin >> arr[i];
    }

    int max = arr[0];
    int min = arr[0];

    for (int i = 1; i < 7; i++){
        if(max < arr[i]){
            max = arr[i];
        }
        if(min > arr[i]){
            min = arr[i];
        }
    }
    printf("MAX=%d\nMIN=%d", max, min);


    return 0;
}