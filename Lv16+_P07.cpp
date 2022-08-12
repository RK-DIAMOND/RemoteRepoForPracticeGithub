#include <iostream>
#define X 4
#define Y 7
using namespace std;


int main(){
    int arr[Y][X];
    for(int y = 0; y < Y; y++) for(int x = 0; x < X; x++) arr[y][x] = 1 + X*y + x;
    int a[3];
    for(int i = 0; i < 3; i++){
        cin >> a[i];
        for(int x = 0; x < X; x++) arr[a[i]][x] = 0;
    }
    for(int y = 0; y < Y; y++){
        for(int x = 0; x < X; x++){
            printf("%d ", arr[y][x]);
        }
        printf("\n");
    }
return 0;} // End of main function
