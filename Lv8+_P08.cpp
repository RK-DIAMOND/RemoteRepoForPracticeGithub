#include <iostream>
using namespace std;

int main(){
    int arr[6][3] = { 0 };
    int n[2] = { 0 };
    cin >> n[0] >> n[1];

    int i = 0;
    int j = 0;
    for (i = 0; i < 6; i++){
        for (j = 0;  j < 3; j++){
            arr[i][j] = n[i / 3];
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }

return 0;}