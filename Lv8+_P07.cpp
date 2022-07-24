#include <iostream>
using namespace std;

int main(){
    int y, x, a;
    cin >> y >> x >> a;
    int arr[3][3] = { 0 };
    arr[y][x] = a;
    int i = 0;
    int j = 0;
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

return 0;}