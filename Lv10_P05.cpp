#include <iostream>
using namespace std;

int main(){

    int arr[3][3][3] = {
        {
        {9, 6, 3},
        {8, 5, 2},
        {7, 4, 1}
    },
        {
        {7, 8, 9},
        {4, 5, 6},
        {1, 2, 3}
    },
        {
        {10, 13, 16},
        {11, 14, 17},
        {12, 15, 18}
    }
    };

    int in, n;
    cin >> in;
    if (in % 5 == 1){
        n = 0;
    }
    else if (in % 5 == 2){
        n = 1;
    }
    else{
        n = 2;
    }
    
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("%d ", arr[n][i][j]);
        }
        printf("\n");
    }

    return 0;

}
