#include <iostream>
#include <queue>
#include <vector>
#define Y 8
#define X 9
using namespace std;

struct node{
    int y, x;
    int lev;
};
char map[Y][X];
bool used[Y][X] = { false, };
int dy[4] = {-1, 1, 0, 0};
int dx[4] = {0, 0, -1, 1};
queue<node> q;
vector<node> god;
vector<node> human;


bool isOut(int y, int x){
    if(y < 0) return true;
    if(x < 0) return true;
    if(y >= Y) return true;
    if(x >= X) return true;
    return false;
}


void getMap(){
    for(int y = 0; y < Y; y++){
        for(int x = 0; x < X; x++){
            cin >> map[y][x];
        }
    }
}


void getGod(){
    q = queue<node>();
    god.push_back({0, X - 1, 0});
    q.push({0, X - 1, 0});
    used[0][X - 1] = true;
    while(!q.empty()){
        node now = q.front();
        q.pop();
        for(int i = 0; i < 4; i++){
            int ny = now.y + dy[i];
            int nx = now.x + dx[i];

            if(isOut(ny, nx)) continue;
            if(used[ny][nx]) continue;
            if(map[ny][nx] == '_') continue;

            q.push({ny, nx, 0});
            god.push_back({ny, nx, 0});
            used[ny][nx] = true;
        }
    }
}


void getHuman(){
    q = queue<node>();
    human.push_back({Y - 1, 0, 0});
    q.push({Y - 1, 0, 0});
    used[Y - 1][0] = true;
    while(!q.empty()){
        node now = q.front();
        q.pop();
        for(int i = 0; i < 4; i++){
            int ny = now.y + dy[i];
            int nx = now.x + dx[i];

            if(isOut(ny, nx)) continue;
            if(used[ny][nx]) continue;
            if(map[ny][nx] == '_') continue;

            q.push({ny, nx, 0});
            human.push_back({ny, nx, 0});
            used[ny][nx] = true;
        }
    }
}


bool isHuman(int y, int x){
    for(int n = 0; n < human.size(); n++){
        if(y == human[n].y && x == human[n].x) return true;
    }
    return false;
}

/*
bool isGod(int y, int x){
    for(int n = 0; n < god.size(); n++){
        if(y == god[n].y && x == god[n].x) return true;
    }
    return false;
}
*/

int getDistance(){
    q = queue<node>();
    for(int n = 0; n < god.size(); n++){
        q.push({god[n].y, god[n].x, 0});
    }
    while(!q.empty()){
        node now = q.front();
        q.pop();
        for(int i = 0; i < 4; i++){
            int ny = now.y + dy[i];
            int nx = now.x + dx[i];

            if(isHuman(ny, nx)) return now.lev;
            if(used[ny][nx]) continue;
            if(isOut(ny, nx)) continue;

            q.push({ny, nx, now.lev + 1});
            used[ny][nx] = true;
        }
    }
    return -1;
}


int main(){
    getMap();
    getGod();
    getHuman();
    cout << getDistance();

    return 0;
}