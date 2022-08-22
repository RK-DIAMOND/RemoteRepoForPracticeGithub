#include <iostream>
#define MAX 100
using namespace std;

int n;
bool arr[MAX][MAX];
int parents[MAX];

void getInput(){
    cin >> n;
    for(int y = 0; y < n; y++) for(int x = 0; x < n; x++) cin >> arr[y][x];
}

void initParents(){
    for(int i = 0; i < n; i++) parents[i] = i;
}

int find(int a){
    if(a == parents[a]) return a;
    return find(parents[a]);
}

bool is_in_same_group(int a, int b){
    return find(a) == find(b);
}

void Union(int a, int b){
    parents[find(b)] = find(a);
}

bool making(){
    for(int y = 0; y < n; y++) for(int x = y + 1; x < n; x++) if(arr[y][x] == 1){
        if(is_in_same_group(y, x)) return true;
        Union(y, x);
    }
    return false;
}


int main(){
    getInput();
    initParents();
    if(making()) cout <<"cycle 발견";
    else cout << "미발견";
return 0;}
