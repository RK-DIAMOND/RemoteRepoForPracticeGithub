#include <iostream>
using namespace std;

int main(){
    bool mask[2][5] = {
        0, 0, 1, 0, 0,
        0, 0, 1, 1, 1
    };
    int arr[2][5] = {
        3, 5, 4, 1, 1,
        3, 5, 2, 5, 6
    };
    int in;
    cin >> in;
    for(int y = 0; y < 2; y++){
        for(int x = 0; x < 5; x++){
            if(mask[y][x] * arr[y][x] == in){
                printf("%d 존재", in);
                return 0;
            }
        }
    }
    printf("%d 없음");
return 0;} // End of main function
