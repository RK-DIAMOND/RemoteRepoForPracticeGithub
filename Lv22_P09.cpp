#include <iostream>
#define MAX 100
using namespace std;

char passwords[5][MAX] = {
    "Jason", "Dr.tom", "EXEXI", "GK12P", "POW"
};
char inp[MAX];

int length(char c[MAX]){
    int result = 0;
    while(1){
        if(c[result] == '\0') return result;
        result++;
    }
}

bool isSame(char c[MAX], char d[MAX]){
    int l1 = length(c);
    int l2 = length(d);
    if(l1 != l2) return false;
    for(int i = 0; i < l1; i++) if(c[i] != d[i]) return false;
    return true;
}

void getInput(){
    cin >> inp;
}

bool isinPW(char in[]){
    for(int i = 0; i < 5; i++) if(isSame(passwords[i], in)) return true;
    return false;
}


int main(){
    getInput();
    if(isinPW(inp)) cout << "암호해제";
    else cout << "암호틀림";
return 0;}
