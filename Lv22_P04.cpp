#include <iostream>
using namespace std;

int getInput(){
    char c[5];
    char up[5] = "up  ";
    char down[5] = "down";
    int u = 0;
    int d = 0;
    cin >> c;
    for(int i = 0; i < 5; i++){
        if((int)(c[i]) == (int)(up[i])){
            u++;
        }
        if((int)(c[i]) == (int)(down[i])){
            d++;
        }
    }
    if(u > d) return 1;
    else return -1;
}


void printresult(int cur){
    if(cur >= 0) cout << cur + 1;
    else cout << 'B' << -cur;
}


int main(){
    int s = 0;
    for(int _ = 0; _ < 5; _++){
        s += getInput();
    }
    printresult(s);

return 0;}
