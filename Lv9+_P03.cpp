#include <iostream>
using namespace std;

int main(){
    char C[5][3] = {
        {'D', 'A', 'A'},
        {'B', 'C', 'D'},
        {'E', 'F', 'A'},
        {'A', 'A', 'D'},
        {'F', 'G', 'E'}
    };

    char in;
    cin >> in;
    int i , j;
    for (i = 0; i < 5; i++){
        for (j = 0; j < 3; j++){
            if (C[i][j] == in){
                printf("(%d,%d)\n", i, j);
            }
        }
    }

    return 0;
}