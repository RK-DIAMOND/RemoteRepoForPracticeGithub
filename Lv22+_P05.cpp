#include <iostream>
#define _NO_MORE_HARD_CODING
using namespace std;


int main(){
    int arr[3][6] = {
        3, 5, 4, 2, 2, 3,
        1, 3, 3, 3, 4, 2,
        5, 4, 4, 2, 3, 5
    };
    char price[6] = "TPGKC";

    char y;
    int x;
    cin >> y >> x;
    int yy;
    yy = y - 'A';
    cout << price[arr[yy][x - 1] - 1]; 


return 0;}
