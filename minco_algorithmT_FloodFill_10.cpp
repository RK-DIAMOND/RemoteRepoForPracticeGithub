#include <iostream>
#include <queue>
#include <vector>
using namespace std;
#define MAX 22

struct node{
    int y, x;
    int lev;
};

char map[MAX][MAX];
int mm;
int py, px;
int by, bx;
int dy[4] = {-1, 1, 0, 0};
int dx[4] = {0, 0, -1, 1};
queue<node> q;
vector<node> shg;


void getMapSize(){
    cin >> mm;
}


void getPersonCoord(){
    cin >> py >> px;
}

/*
void printMap(){
    for(int y = 0; y < mm; y++){
        for(int x = 0; x < mm; x++){
            printf("%d ", map[y][x]);
        }
        printf("\n");
    }
}
*/

bool isOutMap(int y, int x){
    if ( y < 0 ) return true;
    if ( x < 0 ) return true;
    if ( y >= mm ) return true;
    if ( x >= mm ) return true;
    return false;
}


void getMap(){
    for(int y = 0; y < mm; y++){
        for(int x = 0; x < mm; x++){
            cin >> map[y][x];
            if(map[y][x] == '$'){
                by = y; bx = x;
            }
            if(map[y][x] == 'A'){
                shg.push_back({y, x}); // shg vector contains positions of S.H.G
            }
        }
    }
}


int pathfinder(int iy, int ix, int fy, int fx){
    int time = 1;
    int used[MAX][MAX] = { 0 };
    q = queue<node>();
    q.push({iy, ix, time});
    used[iy][ix] = 1;
    while(!q.empty()){
        node now = q.front();
        q.pop();
        for(int i = 0; i < 4; i++){
            int ny = now.y + dy[i];
            int nx = now.x + dx[i];

            if(isOutMap(ny, nx)) continue;
            if(used[ny][nx] == 1) continue;
            if(map[ny][nx] == '#') continue;
            if(map[ny][nx] == '$') continue;
            if(ny == fy && nx == fx) return now.lev;

            time = now.lev + 1;
            q.push({ny, nx, time});
            used[ny][nx] = 1;
        }
    }
    return -1;
}


int main(){
    getMapSize();
    getMap();
    getPersonCoord();
    int numshg = shg.size();
    int min = MAX * MAX;
    for(int i = 0; i < numshg; i++){
        int len = 0;
        len += pathfinder(py, px, shg[i].y, shg[i].x);
        len += pathfinder(by, bx, shg[i].y, shg[i].x);
/*        cout << pathfinder(py, px, shg[i].y, shg[i].x) << " ";
        cout << pathfinder(by, bx, shg[i].y, shg[i].x) << '\n';*/
        if(min > len) min = len;
    }
    cout << min;
    return 0;
}