#include <iostream>
using namespace std;

int path[4];

int getInput(){
    int result = 0;
    cin >> result;
    return result;
}

void rcsv(int lev, int brc){
    if(lev == 4){
        for(int i = 0; i < 4; i++) printf("%d", path[i]);
        printf("\n");
        return;
    }
    for(int i = 1; i <= brc; i++){
        path[lev] = i;
        rcsv(lev + 1, brc);
        path[lev] = 0;
    }
}

int main(){
    rcsv(0, getInput());
return 0;}
