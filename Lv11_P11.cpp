#include <iostream>
using namespace std;

int main(){
    int arr[4][4] = {
        {1, 3, 6, 2},
        {4, 2, 4, 5},
        {6, 3, 7, 3},
        {1, 5, 4, 6}
    };
    int in = 0;
    int idx = 0;
    int select[16] = { 0 };
    cin >> in;

    for (int i = 0; i < 16; i++){
        if (in < arr[i/4][i%4]){
            select[idx] = arr[i/4][i%4];
            idx++;
        }
    }

    for (int i = 0; i < idx; i++){
        printf("%d ", select[i]);
    }

    return 0;
}