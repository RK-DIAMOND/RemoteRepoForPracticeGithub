#include <iostream>
#include <queue>
#include <vector>
#define MAX 202
using namespace std;

struct node{
    int y, x;
    int lev;
};
queue<node> q;
vector<node> mj;
vector<node> mj2;
int mjid, id2;
int map[MAX][MAX];
bool used[MAX][MAX] = { false, };
int dy[4] = {-1, 1, 0, 0};
int dx[4] = {0, 0, -1, 1};
int my, mx;

void getMapSize(){
    cin >> my >> mx;
}


void getMap(){
    for(int y = 0; y < my; y++){
        for(int x = 0; x < mx; x++){
            cin >> map[y][x];
        }
    }
}


bool isOut(int y, int x){
    if(y < 0) return true;
    if(x < 0) return true;
    if(y >= my) return true;
    if(x >= mx) return true;
    return false;
}


void getMJ(){
    int y;
    int x;
    for(int yy = 0; yy < my; yy++){
        for(int xx = 0; xx < mx; xx++){
            if(map[yy][xx] != 0){
                mjid = map[yy][xx];
                y = yy;
                x = xx;
                yy = my;
                break;
            }
        }
    }
    q = queue<node>();
    q.push({y, x, 0});
    used[y][x] = true;
    mj.push_back({y, x, 0});
    while(!q.empty()){
        node now = q.front();
        q.pop();
        for(int i = 0; i < 4; i++){
            int ny = now.y + dy[i];
            int nx = now.x + dx[i];

            if(isOut(ny, nx)) continue;
            if(used[ny][nx]) continue;
            if(map[ny][nx] != mjid) continue;
            
            mj.push_back({ny, nx, 0});
            q.push({ny, nx, 0});
            used[ny][nx] = true;
        }
    }
}


void getMJ2(){
    int y;
    int x;
    for(int yy = 0; yy < my; yy++){
        for(int xx = 0; xx < mx; xx++){
            if(map[yy][xx] != 0 && map[yy][xx] != mjid){
                id2 = map[yy][xx];
                y = yy;
                x = xx;
                yy = my;
                break;
            }
        }
    }
    q = queue<node>();
    q.push({y, x, 0});
    used[y][x] = true;
    mj2.push_back({y, x, 0});
    while(!q.empty()){
        node now = q.front();
        q.pop();
        for(int i = 0; i < 4; i++){
            int ny = now.y + dy[i];
            int nx = now.x + dx[i];

            if(isOut(ny, nx)) continue;
            if(used[ny][nx]) continue;
            if(map[ny][nx] != id2) continue;
            
            mj2.push_back({ny, nx, 0});
            q.push({ny, nx, 0});
            used[ny][nx] = true;
        }
    }
}


bool isInMJ2(int y, int x){
    for(int i = 0; i < mj2.size(); i++){
        if(y == mj2[i].y && x == mj2[i].x){
            return true;
        }
    }
    return false;
}


int fromMJtoMJ2(){
    q = queue<node>();
    for(int n = 0; n < mj.size(); n++){
        q.push({mj[n].y, mj[n].x, 0});
    }
    while(!q.empty()){
        node now = q.front();
        q.pop();
        for(int i = 0; i < 4; i++){
            int ny = now.y + dy[i];
            int nx = now.x + dx[i];

            if(isInMJ2(ny, nx)) return now.lev;
            if(used[ny][nx]) continue;
            if(isOut(ny, nx)) continue;

            q.push({ny, nx, now.lev + 1});
            used[ny][nx] = true;
        }
    }
    return -1;
}


int main(){
    getMapSize();
    getMap();
    getMJ();
    getMJ2();
    cout << fromMJtoMJ2();

    return 0;
}