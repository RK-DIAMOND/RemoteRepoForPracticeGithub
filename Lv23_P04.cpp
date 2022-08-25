#include <iostream>
using namespace std;

char mem[6] = "BTSKR";
char path[5];
bool used[5] = { false, false, false, false, false };
int n = 0;
int cnt = 0;


void showlist(){
    for(int i = 0; i < n; i++) cout << path[i];
    printf("\n");
}


void rcsv(int lev){/*
    if(lev == n && used[2]){
        cnt++;
        showlist();
        return;
    }*/
    if(lev == n){
        if(used[2]){
            cnt++;
//          showlist();
        }
        return;
    }
    for(int i = 0; i < 5; i++) if(!used[i]){
            path[lev] = mem[i];
            used[i] = true;
            rcsv(lev + 1);
            path[lev] = ' ';
            used[i] = false;
    }
}


int main(){
    cin >> n;
    rcsv(0);
    cout << cnt;
return 0;}
