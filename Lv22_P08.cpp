#include <iostream>
using namespace std;

int arr[3][2][2] = {
    2, 4, 1, 5, 2, 3, 3, 6, 7, 3, 1, 5
};

void testPrintingOf_arr(){
    for(int i = 0; i < 3; i++){
        for(int y = 0; y < 2; y++){
            for(int x = 0; x < 2; x++){
                printf("%d ", arr[i][y][x]);
            }
            printf("\n");
        }
        printf("-----\n");
    }
}

int main(){
    int n;
    cin >> n;
    int max = -1;
    int min = 32767;
    for(int y = 0; y < 2; y++) for(int x = 0; x < 2; x++){
        if(min > arr[n][y][x]) min = arr[n][y][x];
        if(max < arr[n][y][x]) max = arr[n][y][x];
    }
    printf("MAX=%d\nMIN=%d", max, min);
return 0;}
