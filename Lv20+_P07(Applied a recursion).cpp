#define _NO_MORE_HARD_CODING
#define MAX 32767
#include <iostream>
using namespace std;

int length(char c[MAX]){
    for(int i = 0; i < MAX; i++) if(c[i] == '\0') return i;
    return MAX;
}

void printer(int s, char c[MAX], int l){
    for(int i = 0; i < s; i++) cout << c[i];
    printf("\n");
    if(s == l) return;
    else printer(s + 1, c, l);
}

int main(){
    char in[MAX];
    cin >> in;
    printer(1, in, length(in));
return 0;} // End of main function
