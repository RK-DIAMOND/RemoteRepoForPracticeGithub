#include <iostream>
using namespace std;

int cnt = 0;
char path[4];
char target[4];
bool endFlag = false;

bool isSame(char c[4], char d[4]){
    for(int i = 0; i < 4; i++) if(c[i] != d[i]) return false;
    return true;
}

void getTarget(){
    cin >> target;
}

void rcsv(int lev){
    if(lev == 3){
        cnt++;
        if(isSame(path, target)){
            endFlag = true;
            printf("%d번째", cnt);
        }
        return;
    }
    for(int i = 0; i < 4; i++){
        path[lev] = (char)(65 + i);
        rcsv(lev + 1);
        if(endFlag) return;
        path[lev] = '_';
    }
}

int main(){
    getTarget();
    rcsv(0);
return 0;}
