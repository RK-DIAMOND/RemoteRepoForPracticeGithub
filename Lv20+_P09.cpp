#define _NO_MORE_HARD_CODING
#define MAX 32767
#include <iostream>
using namespace std;

int FUCKYOU[4][5] = {
    3, 5, 4, 2, 5,
    3, 3, 3, 2, 1,
    3, 2, 6, 7, 8,
    9, 1, 1, 3, 2
};

bool is_in_the_range(int y, int x){
    if(y < 0 || y >= 4 || x < 0 || x >= 5) return false;
    return true;
}

int sum(int y, int x, int ys, int xs){
    int result = 0;
    for(int v = 0; v < ys; v++) for(int u = 0; u < xs; u++){
        if(is_in_the_range(y + v, x + u)) result += FUCKYOU[y + v][x + u];
        else return -1;
    }
    return result;
}

int main(){
    int ys, xs;
    cin >> ys >> xs;
    int max = -1;
    int my = -1;
    int mx = -1;
    for(int y = 0; y + ys <= 4; y++){
        for(int x = 0; x + xs <= 5; x++){
            if(max < sum(y, x, ys, xs)){
                max = sum(y, x, ys, xs);
                my = y;
                mx = x;
            }
        }
    }
    printf("(%d,%d)", my, mx);
return 0;} // End of main function
