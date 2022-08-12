#include <iostream>
using namespace std;

int isin(char h[7], char t){
    for(int i = 0; i < 7; i++){
        if(h[i] == '\0') return 0;
        if(h[i] == t) return 1;
    }
    return 0;
}

int main(){
    char h[7] = "BTKIGZ";
    char target[4];
    for(int i = 0; i < 4; i++) cin >> target[i];
    cout << isin(h, target[0]) + isin(h, target[1]) + isin(h, target[2]) + isin(h, target[3]);
return 0;} // End of main function
