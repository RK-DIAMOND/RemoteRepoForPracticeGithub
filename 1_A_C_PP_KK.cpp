#include <iostream>
#include <queue>
#include <vector>
#define MAX 15
using namespace std;

int pmap[MAX][MAX];
bool used[MAX][MAX];
int N, M;
int dx[6] = {1, 0, -1, 0, -1, 1};
int dy[2][6] = {
    0, 1, 0, -1, -1, -1,
    0, 1, 0, -1, 1, 1
};

struct coord{
    int yc;
    int xc;
};

struct product{
    vector<coord> adds = vector<coord>();
    int price = 0;
};

coord path[4];
coord stack[2][4];

struct order_coord{
    bool operator()(coord a, coord b){
        if(a.yc != b.yc) return a.yc > b.yc;
        if(a.xc != b.xc) return a.xc > b.xc;
        return false;
    };
};

struct order_price{
    bool operator()(product a, product b){
        if(a.price != b.price) return a.price < b.price;
        else return false;
    };
};

priority_queue<product, vector<product>, order_price> result;


bool outrange(int y, int x){
    if(y < 0 || y >= N || x < 0 || x >= M) return true;
    return false;
}


bool outrangeC(coord c){
    if(c.yc < 0 || c.yc >= N || c.xc < 0 || c.xc >= M) return true;
    return false;
}


void getInput(){
    cin >> N >> M;
    for(int y = 0; y < N; y++){
        for(int x = 0; x < M; x++){
            cin >> pmap[y][x];
        }
    }
return;}


void clearused(){
    for(int y = 0; y < N; y++) for(int x = 0; x < M; x++) used[y][x] = false;
return;}


void clearresult(){
    result = priority_queue<product, vector<product>, order_price>();
return;}


void printresult(){
    while(!result.empty()){
        for(int j = 0; j < 4; j++){
            printf("(%d, %d), ",result.top().adds[j].yc, result.top().adds[j].xc);
        }
        printf("has price of %d\n", result.top().price);
        result.pop();
    }
return;}


void printproduct(product k){
    for(int i = 0; i < k.adds.size(); i++){
        printf("(%d, %d),", k.adds[i].yc, k.adds[i].xc);
    }
    printf("price of %d\n", k.price);
return;}


// void startit(coord c){
//     queue<coord> K;
//     used[c.yc][c.xc] = true;
//     K.push(c);
//     if(K.size() >= 4){
//         product temp;
//         temp.adds = vector<coord>();
//         while(!K.empty()){
//             coord tempo = K.front();
//             K.pop();
//             temp.adds.push_back(tempo);
//             temp.price += pmap[tempo.yc][tempo.xc];
//         }
//         result.push(temp);
//         return;
//     }
//     while(K.size() < 4){
//         for(int i = 0; i < K.size(); i++){
//             queue<coord> Q = K;
//             printf("%d: (%d, %d), \n", K.size(), Q.front().yc, Q.front().xc);
//         Q.pop();
//         }
//         printf("\n");
//         coord now = K.front();
//         K.pop();
//         for(int i = 0; i < 6; i++){
//             coord next;
//             next.yc = now.yc + dy[now.xc % 2][i];
//             next.xc = now.xc + dx[i];
//             if(outrangeC(next)) continue;
//             if(used[next.yc][next.xc]) continue;
//             startit(next);
//         }
//     }
// }


void takestack(coord p[4]){
    for(int i = 0; i < 4; i++){
        stack[1][i].yc = p[i].yc;
        stack[1][i].xc = p[i].xc;
    }
    if(
        stack[0][0].yc == stack[1][0].yc &&
        stack[0][0].xc == stack[1][0].xc &&
        stack[0][1].yc == stack[1][1].yc &&
        stack[0][1].xc == stack[1][1].xc &&
        stack[0][2].yc == stack[1][2].yc &&
        stack[0][2].xc == stack[1][2].xc &&
        stack[0][3].yc == stack[1][3].yc &&
        stack[0][3].xc == stack[1][3].xc
    ){
        return;
    }
    stack[0][0].yc = stack[1][0].yc;
    stack[0][0].xc = stack[1][0].xc;
    stack[0][1].yc = stack[1][1].yc;
    stack[0][1].xc = stack[1][1].xc;
    stack[0][2].yc = stack[1][2].yc;
    stack[0][2].xc = stack[1][2].xc;
    stack[0][3].yc = stack[1][3].yc;
    stack[0][3].xc = stack[1][3].xc;
    product temp;
    for(int i = 0; i < 4; i++){
        temp.adds.push_back(stack[0][i]);
    }
    temp.price =
        pmap[stack[0][0].yc][stack[0][0].xc] +
        pmap[stack[0][1].yc][stack[0][1].xc] +
        pmap[stack[0][2].yc][stack[0][2].xc] +
        pmap[stack[0][3].yc][stack[0][3].xc];
//    printproduct(temp);
    result.push(temp);
return;}

void startit(coord now, int level){
    // arr[level] = now;
    // used[now.yc][now.xc] = true;
    // if(level == 3){
    //     product temp;
    //     for(int i = 0; i < 4; i++){
    //         temp.adds.push_back(arr[i]);
    //         temp.price += pmap[arr[i].yc][arr[i].xc];
    //     }
    //     result.push(temp);
    //     return;
    // }
    // for(int i = 0; i < 6; i++){
    //     coord next;
    //     next.yc = now.yc + dy[now.xc % 2][i];
    //     next.xc = now.xc + dx[i];
    //     if(outrangeC(next)) continue;
    //     if(used[next.yc][next.xc]) continue;
    //     startit(next, level + 1);
    //     used[next.yc][next.xc] = false;
    // }
    if(level == 4){
        product temp;
        // for(int i = 0; i < 4; i++){
        //     printf("(%d, %d) ", path[i].yc, path[i].xc);
        // }
        // printf("\n");
        takestack(path);
        return;
    }
    for(int i = 0; i < 6; i++){
        coord next;
        next.yc = now.yc + dy[now.xc % 2][i];
        next.xc = now.xc + dx[i];
        if(outrangeC(next)) continue;
        if(used[next.yc][next.xc]) continue;
        used[next.yc][next.xc] = true;
        path[level] = now;
        startit(next, level + 1);
        path[level] = {-1, -1};
        used[next.yc][next.xc] = false;
    }
}


// int path[4];
// void run(int level){
//     if(level == 4){
//         for(int i = 0; i < 4; i++){
//             printf("%d ", path[i]);
//         }
//         printf("\n");
//         return;
//     }
//     for(int i = 0; i < 4; i++){
//         path[level] = i;
//         run(level + 1);
//         path[level] = -1;
//     }
// }

int main() {
    getInput();
    clearresult();
    for(int y = 0; y < N; y++){
        for(int x = 0; x < M; x++){
            clearused();
            startit({y, x}, 0);
        }
    }
    product end = result.top();
    cout << end.price;
return 0;} // End of main function