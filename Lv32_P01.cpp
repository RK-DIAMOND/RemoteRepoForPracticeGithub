#include <iostream>
#include <algorithm>
#define MAX 101
using namespace std;
int nS;
struct set{
    int n;
    char c;
};

bool comp(set a, set b){
    if(a.n != b.n) return a.n < b.n;
    else return a.c < b.c;
}

int main(){
    set s[MAX];
    cin >> nS;
    for(int i = 0; i < nS; i++){
        cin >> s[i].n >> s[i].c;
    }
    sort(s, s+nS, comp);
    for(int i = 0; i < nS; i++){
        printf("%d %c\n", s[i].n, s[i].c);
    }
    return 0;
}