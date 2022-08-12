#include <iostream>
#include <queue>
#include <vector>
#define MAX 255
#define BIG 32767
using namespace std;
struct edge{
    int to;
    int cost;
};

bool operator<(edge a, edge b){
    if(a.cost != b.cost) return a.cost > b.cost;
    else if(a.to != b.to) return a.to > b.to;
    else return false;
}
vector<edge> v[10];
priority_queue<edge> pq;

// 1. 아직 확정하지 않는 점 중에서 가장 짧은 거리(시작점으로부터)로 갈 수 있는 node 하나 골라서 start.
// 2. 골랐던 node를 기반으로 갈 수 있는 모든 node에 대한 거리를 갱신해준다.
/*
int main(){
    freopen("trash.txt", "r", stdin);
    int nNode = 8;
    int nEdge = 11;
    for(int i = 0; i < nEdge; i++){
        int from, to, cost;
        cin >> from >> to >> cost;

        arr[from][to] = cost;
        arr[to][from] = cost;
    }
    int dst[10]; // distance
    for(int i = 0; i < 10; i++){
        if(i != 1) dst[i] = BIG; // 계산상으로 나올 수 없는 크기의 값으로 initialize.
        // 엄청 큰 수가 들어있다면 아직 계산을 하지 않았다고 볼 수 있다.
        else dst[i] = 0; // start에서는 거리가 0임은 당연하다.
    }
    // dst[] 뿐만 아니라, 우리가 거리를 확정했는지 안했는지도 표기해 놓아야 한다.
    bool used[10] = {false, }; // index: node 번호, value: 해당 '점'의 거리를 확정했나?
    // 1. 아직 확정하지 않은 node들 중 가장 가까운 node 하나 select.
    int rptN = nNode - 1;
    // nNode - 1 번의 반복으로 충분히 dst array 정리된다.
    for(int repeat = 0; repeat < rptN; repeat++){
        int now = -1;
        int tempmin = BIG;
        for(int i = 1; i <= nNode; i++){ // i는 node 번호
            if(tempmin > dst[i] && !used[i]){
                now = i;
                tempmin = dst[i];
            }
        }// now: 이번에 확정할 수 있는 node, 현재 확정되지 않은 점 중 제일 가까운 점
        // 2. nowed node를 기준으로 모든 node를 갱신
        used[select] = true;

        for(int next = 1; next <= nNode; next++){
            if(arr[next][select] == 0) continue;
            // 일단, next는 now에서 갈 수 있는 node이다.
            // dst[select] // 시작점에서 now까지의 거리
            // arr[next][select] // now ~ next의 거리
            if(dst[select] + arr[select][next] > dst[next]) continue;
            dst[next] = dst[select] + arr[select][next];
            // 기존 dst[next] 보다 start -> now -> next가 더 좋으니 distance array[next]를 갱신한다.
        }
    } // 이 문을 한 번 반복할 때마다 한 점의 dst를 갱신한다.
    // 따라서 반복할 횟수는 nNode.
    // 근데 사실 한 번 덜 해도 작동이 잘 마무리된다. on the other word, rptN = nNode - 1 is okay.
    // 마지막 node에서는 확정할 필요가 없기 때문.
    // 결과적으로, 모든 거리를 dst[]에 저장하게 된다.
    for(int i = 1; i <= nNode; i++){
        printf("dst[%d] = %d\n", i, dst[i]);
    }
    



    return 0;
} // End of main function
*/


int main(){
    int nNode = 8;
    int nEdge = 11;
    int dst[10];
    bool used[10] = { false, };
    for(int i = 0; i < nEdge; i++){
        int from, to, cost;
        cin >> from >> to >> cost;
        v[from].push_back({to, cost});
        v[to].push_back({from, cost});
    }
    for(int i = 0; i < 10; i++) {
        dst[i] = BIG;
    }
    dst[1] = 0;
    // used[1] = 0;
    // 아직 used[1] = 0 이 될 때가 아니다!

    pq.push({1, 0});

    // while(!pq.empty()){
    //     printf("I came into the head of while: and now my pq.size is %d.\n", pq.size());
    //     int now = pq.top().to;
    //     int nowcost = pq.top().cost;
    //     pq.pop();
    //     printf("Now i'm on just before the if statement and my pq.pop().to = %d and pq.pop().cost = %d\n", pq.top().to, pq.top().cost);

    //     if(used[now]) continue;
    //     used[now] = true;
    //     for(int i = 0; i < v[now].size(); i++){
    //         int next = v[now][i].to;
    //         int nnc = v[now][i].cost; // now->next cost
    //         int costcand = dst[now] + nnc;
    //         if(costcand < dst[next]) dst[next] = costcand;
    //         pq.push({next, dst[next]});
            
    //     }
    // }

    for(int rpt = 0; rpt < nNode; rpt++){
        // Select the node from unused nodes with minimum dst.
        int select = -1;
        int tempmin = BIG;
        for(int i = 1; i <= nNode ; i++){
            if(used[i]) continue;
            if(tempmin > dst[i]){
                select = i;
                tempmin = dst[i];
            }
        }
        if(select < 0) break;
        used[select] = true;
        // Renew the all dst[]s where they can reached from 'select' node directly.
        // vector<edge> sels;
        // for(int i = 0; i < av[select].size(); i++){
        //     sels.push_back({av[select][i].to, av[select][i].cost});
        // }
        // for(int i = 0; i < sels.size(); i++){
        //     int currentdst = dst[sels[i].to];
        //     int newdst = dst[select] + sels[i].cost;
        //     if(newdst < currentdst) dst[sels[i].to] = newdst;
        // }
        // sels = vector<edge>();
        
        for(int i = 0; i < v[select].size(); i++){
            int next = v[select][i].to; // next는 select에 연결된 node의 번호
            int itscost = v[select][i].cost; // itscost는 select -> next의 비용
            if(dst[select] + itscost < dst[next]) dst[next] = dst[select] + itscost;
        }
        // for(int i = 0; i < v[select].size(); i++){
        //     edge edg = v[select][i];
        //     int next = edg.to; // now -> next 라는 점 번호
        //     int edgedst = edg.cost; // now -> next cost
        //     // start -> now -> next
        //     if (dst[select] + edgedst > dst[next]) continue;
        //     dst[next] = dst[select] + edgedst;
        // }
    } // End of repeatation (nNode times)

    for(int i = 1; i <= nNode; i++){
        printf("dst[%d] = %d\n", i, dst[i]);
    }
    
    return 0;
} // End of main function
