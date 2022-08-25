#include <iostream>
using namespace std;

char input[5];
char path[4];
int cnt = 0;

void getInput(){
    cin >> input;
}

void rcsv(int lev){
    if(lev == 4){/*
        for(int i = 0; i < 4; i++) cout << path[i];
        printf("\n");*/
        cnt++;
        return;
    }
    for(int i = 0; i < 4; i++){
        if(lev > 0){
            if((path[lev - 1] == 'B' && input[i] == 'T')
            || (path[lev - 1] == 'T' && input[i] == 'B')){
                continue;
            }
        }
        path[lev] = input[i];
        rcsv(lev + 1);
        path[lev] = ' ';
    }
}

int main(){
    getInput();
    rcsv(0);
    cout << cnt;
return 0;}
