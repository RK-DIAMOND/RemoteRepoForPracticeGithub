#include <iostream>
using namespace std;

int N;
char sample[5] = "BGTK";
char path[4];

void getInput(){
    cin >> N;
}

void rcsv(int lev, int goal){
    if(lev == goal){
        for(int i = 0; i < lev; i++){
            printf("%c", path[i]);
        }
        printf("\n");
        return;
    }

    for(int i = 0; i < 4; i++){
        path[lev] = sample[i];
        rcsv(lev + 1, goal);
        path[lev] = 0;
    }
}

int main(){
    getInput();
    rcsv(0, N);
return 0;}
