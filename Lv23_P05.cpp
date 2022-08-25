#include <iostream>
using namespace std;

char frd[5] = {'E', 'W', 'A', 'B', 'C'};
bool used[5] = { false, false, false, false, false};
char path[4];

void getexcept(){
    char ex;
    cin >> ex;
    for(int i = 0; i < 5; i++) if(frd[i] == ex){
        used[i] = true;
        break;
    }
}

void rcsv(int lev){
    if(lev == 4){
        for(int i = 0; i < 4; i++) cout << path[i];
        printf("\n");
        return;
    }
    for(int i = 0; i < 5; i++) if(!used[i]){
        path[lev] = frd[i];
        used[i] = true;
        rcsv(lev + 1);
        path[lev] = ' ';
        used[i] = false;
    }
}

int main(){
    getexcept();
    rcsv(0);
return 0;}
