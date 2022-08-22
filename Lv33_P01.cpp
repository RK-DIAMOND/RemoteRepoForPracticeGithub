#include <iostream>
using namespace std;

int parents[4] ={0, 1, 2, 3};

int find(int t){
    if(t == parents[t]) return t;
    return find(parents[t]);

}

void Union(int a, int b){
    parents[b] = find(a);
}

bool are_in_same_group(int a, int b){
    return find(a) == find(b);
}



int main(){
    int n = -1;
    cin >> n;
    for(int i = 0; i < n; i++){
        char c0, c1;
        cin >> c0 >> c1;
        int i0, i1;
        i0 = c0 - 65;
        i1 = c1 - 65;
        // i0과 i1을 Union하려고 하는 데 둘이 이미 같은 그룹이었다면,
        // i0과 i1을 Union하는 순간 cycle이 생긴다.
        if(are_in_same_group(i0, i1)){
            cout << "발견";
            return 0;
        }
        Union(i0, i1);
    }
    cout << "미발견";
return 0;}
