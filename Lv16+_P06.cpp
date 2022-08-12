#include <iostream>
#define L 11
using namespace std;

int maxindex(char in[L]){
    char max = 'A' - 1;
    int Xidx = -1;
    for(int i = 0; i < L; i++){
        if(in[i] == '\0') return Xidx;
        else if(max < in[i]){
            max = in[i];
            Xidx = i;
        }
    }
    return Xidx;
}

int minindex(char in[L]){
    char min = 'Z' + 1;
    int Nidx = L + 1;
    for(int i = 0; i < L; i++){
        if(in[i] == '\0') return Nidx;
        else if(min > in[i]){
            min = in[i];
            Nidx = i;
        }
    }
    return Nidx;
}

int main(){
    char s[L];
    cin >> s;
    printf("%d\n%d", maxindex(s), minindex(s));
return 0;} // End of main function
