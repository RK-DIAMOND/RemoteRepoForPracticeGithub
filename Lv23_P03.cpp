#include <iostream>
#define MAX 50
using namespace std;

int n;
int cnt = 0;
char path[MAX];
char ccl[3] = {'A', 'B', 'C'};


void gethowmany(){
    cin >> n;
}


void rcsv(int lev){
    if(lev == n){
        cnt++;/*
        for(int i = 0; i < n; i++) cout << path[i];
        printf("\n");*/
        return;
    }
    for(int i = 0; i < 3; i++){
        if(lev >= 2
        && path[lev - 2] == path[lev - 1]
        && path[lev - 1] == ccl[i]){
            continue;
        }
        path[lev] = ccl[i];
        rcsv(lev + 1);
        path[lev] = 0;
    }
}


int main(){
    gethowmany();
    rcsv(0);
    cout << cnt;
return 0;}
