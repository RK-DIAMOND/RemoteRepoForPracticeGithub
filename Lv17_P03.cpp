#include <iostream>
#define Y 3
#define X 3
using namespace std;

int main(){
    int h[Y][X] = {
        3, 5, 9,
        4, 2, 1,
        1, 1, 5
    };
    int bit[Y][X] = { 0, };
    int s = 0;
    for(int y = 0; y < Y; y++) for(int x = 0; x < X; x++){
        cin >> bit[y][x];
        s += h[y][x] * bit[y][x];
    }
    cout << s;

return 0;} // End of main function
