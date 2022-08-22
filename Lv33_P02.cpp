#include <iostream>
using namespace std;

int parents[10] = {0, 0, 0, 3, 3, 3, 6, 6, 8, 8};
int used[10];

int find(int x){
    if(x == parents[x]) return x;
    return find(parents[x]);
}

void Union(int a, int b){
    parents[b] = find(a);
}

void getInput(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        char c0, c1;
        int i0, i1;
        cin >> c0 >> c1;
        i0 = (int)(c0) - 65;
        i1 = (int)(c1) - 65;
        Union(i0, i1);
    }
}

int getUsed(){
    int cnt = 0;
    for(int x = 0; x < 10; x++){
        int f = find(x);
        if(used[f] == 0){
            cnt++;
            used[f] = 1;
        }
    }
    return cnt;
}

int main(){
    getInput();
    printf("%d개",getUsed());
return 0;}
