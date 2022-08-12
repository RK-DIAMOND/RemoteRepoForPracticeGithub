#include <iostream>
using namespace std;


int main(){
    bool mask1[4][4] = {
        0, 0, 0, 1,
        1, 1, 0, 1,
        1, 0, 0, 1,
        1, 1, 1, 1
    };
    bool mask2[4][4] = {
        1, 1, 1, 1,
        1, 0, 1, 1,
        1, 0, 0, 0,
        1, 0, 0, 0
    };
    bool result[4][4];
    for(int y = 0; y < 4; y++){
        for(int x = 0; x < 4; x++){
            result[y][x] = mask1[y][x] || mask2[y][x];
            if(!result[y][x]) printf("(%d,%d)\n", y, x);
        }
    }

return 0;} // End of main function
