#include <iostream>
#define MAX 100
using namespace std;

int get(){
    int result;
    cin >> result;
    return result;
}

char path[MAX];

void rcsv(int lev, int n){
    if(lev == n){
        for(int i = 0; i < n; i++){
            printf("%c", path[i]);
        }
        printf("\n");
        return;
    }
    for(int i = 0; i < 2; i++){
        path[lev] = 120 - 9*i;
        rcsv(lev + 1, n);
        path[lev] = ' ';
    }
}

int main(){
    rcsv(0, get());
return 0;}
