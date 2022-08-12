#define _NO_MORE_HARD_CODING
#define MAX 32767
#include <iostream>
#include <queue>
using namespace std;

struct node{
    int y, x;
    int lv;
};

queue<node> q;
char map[4][3];
bool used[4][3] = { false, };
int dy[4] = {-1, 1, 0, 0};
int dx[4] = {0, 0, 1, -1};

void get_map(){
    for(int y = 0; y < 4; y++) for(int x = 0; x < 3; x++) cin >> map[y][x];
}

void pushit(node n, queue<node> q){
    q.push(n);
    used[n.y][n.x] = true;
}

node findA(){
    node result;
    result.lv = 0;
    for(int y = 0; y < 4; y++) for(int x = 0; x < 3; x++) if(map[y][x] == 'A'){
        result.y = y;
        result.x = x;
        return result;
    }
}

bool is_out_of_map(int y, int x){
    if(y < 0 || y >= 4 || x < 0 || x >= 3) return true;
    return false;
}

/*void print(){
    for(int y = 0; y < 4; y++){
        for(int x = 0; x < 3; x++){
            cout << map[y][x];
        }
        cout << "\n";
    }
}*/

int main(){
    get_map();
    cout << map[1][1];
    node start = findA();
    pushit(start, q);
    while(!q.empty()){
        node now = q.front();
        q.pop();
        for(int i = 0; i < 4; i++){
            node next;
            next.y = now.y + dy[i];
            next.x = now.x + dx[i];
            next.lv = now.lv + 1;
            if(map[next.y][next.x] == 'B'){
                cout << next.lv;
                return 0;
            }
            if(is_out_of_map(next.y, next.x)) continue;
            if(used[next.y][next.x]) continue;
            pushit(next, q);
        }
    }    
return 0;} // End of main function
