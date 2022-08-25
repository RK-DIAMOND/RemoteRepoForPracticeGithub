#include <iostream>
using namespace std;

int cardlist[5];
int path[4];
int cnt = 0;

void getInput(){
    char cl[5];
    for(int i = 0; i < 5; i++){
        cin >> cl[i];
        cardlist[i] = cl[i] - '0';
    }
}

void showpath(){
    for(int i = 0; i < 4; i++) cout << path[i];
    printf("\n");
}

void rcsv(int lev){
    if(lev == 4){
        cnt++;
//      showpath();
        return;
    }
    for(int i = 0; i < 5; i++){
        if(lev > 0){
            int dta = path[lev - 1] - cardlist[i];
            if(dta < -3 || dta > 3) continue;
        }
        path[lev] = cardlist[i];
        rcsv(lev + 1);
        path[lev] = ' ';
    }
}

int main(){
    getInput();
    rcsv(0);
    cout << cnt;
return 0;}
