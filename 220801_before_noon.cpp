#include <iostream>
#include <vector>
#include <queue>
#define MAX 15
using namespace std;
    // 1. 그래프 만들기 - 각 Node간의 관계
    // 2. Queue 만들기
    // 3. 시작 Node 정하기
    // 4. BFS Code - Queue에서 Node 꺼내기
    // 5. Now Node에서 now -> next 갈 수 있는 Node ~ next node
    // 6. next들을 queue에 추가
    // 7. 4~6단계 계속 반복
    // 8. 더 이상 추가되는 Node가 없으면 - 종료
    /*
    sample input
9 10
1 2
1 7
2 3
3 4
3 8
4 5
4 6
8 9
7 3
8 6
*/

int main(){
    // 1. 인접행렬로 그래프 만들기
    int cntNode, cntEdge;
    int used[MAX] = { 0,}; //used[N] == 0 : N번 Node를 거친 적 없다.
    int num[MAX] = { 0,}; //num[N] == 최소 Node 경로로 N번 Node로 가는 경우의 수
    cin >> cntNode >> cntEdge;
    int arr[MAX][MAX] = {0, };
    for(int _ = 0; _ < cntEdge; _++){
        // 만약 Tree 형태 가정한다면 Edge 개수는 Node 개수 - 1
        int from, to;
        cin >> from >> to;
        arr[from][to] = 1;
    }
    // 2. Queue 생성
    queue<int> Q;
    // 3. 시작Node 정하기
    Q.push(1);
    used[1] = 1;
    num[1] = 1;
    while(!Q.empty()){ // 7. 4~6단계 계속 반복
                       // 8. 더 이상 추가되는 Node가 없으면 - 종료
        // 4. Queue에서 Node 꺼내기
        int now = Q.front();
        Q.pop();

        cout << now << " : ";
        cout << num[now] << "\n";
        // 5. Now Node에서 now -> next 갈 수 있는 Node ~ next node를 찾는다
        for(int next = 1; next <= cntNode; next++){
            if(arr[now][next] == 0) continue;
            if(used[next] >= 1) continue;
        // 6. next들을 queue에 추가
            used[next] = used[now] + 1;
            num[next] += num[now];
            Q.push(next);
            
        }
    }
    while(1){ // Code::Block에서 원활하게 run되도록 하는 구문
    }
    return 0;
}

/*
// 인접행렬 대신 인접리스트 사용하는 방법
int main(){
    vector<vector<int>> v;
    int used[MAX] = {0,};
    int cntNode = -1;
    cin >> cntNode;
    for(int _ = 0; _ < cntNode - 1; _++){
        int from, to;
        cin >> from >> to;
        v[from].push_back(to);
    }
    int now = 1;
    used[now] = 1;
//    cin >> now;
    queue<int> Q;
    Q.push(now);
    while(!Q.empty()){
        now = Q.front();
        Q.pop();

        for(int next = 0; next < v[now].size(); next++){
            Q.push(v[now][next]);
            used[next] = 1;
        }
    }
    return 0;
}
*/
