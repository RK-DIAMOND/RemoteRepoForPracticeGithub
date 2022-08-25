#include <iostream>
using namespace std;

char frd[5];
char path[4];
bool used[4] = {false, false, false, false};

void getInput(){
    cin >> frd;
}

void rcsv(int lev){
    if(lev == 3){
        for(int i = 0; i < 3; i++) cout << path[i];
        printf("\n");
        return;
    }
    for(int i = 0; i < 4; i++){
        if(used[i]) continue;
        path[lev] = frd[i];
        used[i] = true;
        rcsv(lev + 1);
        used[i] = false;
    }
}

int main(){
    getInput();
    rcsv(0);
return 0;}
