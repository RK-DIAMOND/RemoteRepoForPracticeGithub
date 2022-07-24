#include <iostream>
using namespace std;


int main(){
    char arc[3][3];

    int i = 0;
    int j = 0;

    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            arc[i][j] = (char)('A' + 3*i + j);
        }
    }

    int y[2] = { 0 };
    int x[2] = { 0 };
    cin >> y[0] >> x[0] >> y[1] >> x[1];

    char dummy = arc[y[0]][x[0]];
    arc[y[0]][x[0]] = arc[y[1]][x[1]];
    arc[y[1]][x[1]] = dummy;

    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            printf("%c", arc[i][j]);
        }
        printf("\n");
    }

    return 0;
}