#include <iostream>
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
#define _NO_MORE_HARD_CODING
using namespace std;

char hard[4][5][3] = {
    ' ', '#', ' ',
    '#', ' ', '#',
    '#', '#', '#',
    '#', ' ', '#',
    '#', ' ', '#',

    '#', '#', '#',
    '#', ' ', '#',
    '#', '#', '#',
    '#', ' ', '#',
    '#', '#', '#',

    '#', '#', '#',
    '#', ' ', '#',
    '#', ' ', ' ',
    '#', ' ', '#',
    '#', '#', '#',

    '#', '#', ' ',
    '#', ' ', '#',
    '#', ' ', '#',
    '#', ' ', '#',
    '#', '#', ' '
};


int main(){
    int n;
    cin >> n;

    for(int y = 0; y < 5; y++){
        for(int x = 0; x < 3; x++){
            printf("%c", hard[n][y][x]);
        }
        printf("\n");
    }
return 0;}
