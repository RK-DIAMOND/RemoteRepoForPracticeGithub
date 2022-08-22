#include <iostream>
using namespace std;

char sens[3][11];

void getInput(){
    for(int i = 0; i < 3; i++) cin >> sens[i];
return;}

int length(char c[11]){
    for(int i = 0; i < 11; i++) if(c[i] == '\0') return i;
    return 11;
}

int isSame(char c1[11], char c2[11]){
    int l1 = length(c1);
    int l2 = length(c2);
    if(l1 != l2) return 0;
    for(int i = 0; i < l1; i++) if(c1[i] != c2[i]) return 0;
    return 1;
}

int main(){
    getInput();
    int det = isSame(sens[0], sens[1])
            + isSame(sens[1], sens[2])
            + isSame(sens[2], sens[0]);
    switch(det){
        case 3:
            cout << "WOW";
            break;
        case 1:
            cout << "GOOD";
            break;
        default:
            cout << "BAD";
            break;
    }
return 0;}
