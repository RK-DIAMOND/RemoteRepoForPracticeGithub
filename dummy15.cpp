#include <iostream>
#include <vector>
#include <queue>
#define MAX 15
using namespace std;
    // 1. �׷��� ����� - �� Node���� ����
    // 2. Queue �����
    // 3. ���� Node ���ϱ�
    // 4. BFS Code - Queue���� Node ������
    // 5. Now Node���� now -> next �� �� �ִ� Node ~ next node
    // 6. next���� queue�� �߰�
    // 7. 4~6�ܰ� ��� �ݺ�
    // 8. �� �̻� �߰��Ǵ� Node�� ������ - ����
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
    // 1. ������ķ� �׷��� �����
    int cntNode, cntEdge;
    int used[MAX] = { 0,}; //used[N] == 0 : N�� Node�� ��ģ �� ����.
    int num[MAX] = { 0,}; //num[N] == �ּ� Node ��η� N�� Node�� ���� ����� ��
    cin >> cntNode >> cntEdge;
    int arr[MAX][MAX] = {0, };
    for(int _ = 0; _ < cntEdge; _++){
        // ���� Tree ���� �����Ѵٸ� Edge ������ Node ���� - 1
        int from, to;
        cin >> from >> to;
        arr[from][to] = 1;
    }
    // 2. Queue ����
    queue<int> Q;
    // 3. ����Node ���ϱ�
    Q.push(1);
    used[1] = 1;
    num[1] = 1;
    while(!Q.empty()){ // 7. 4~6�ܰ� ��� �ݺ�
                    // 8. �� �̻� �߰��Ǵ� Node�� ������ - ����
        // 4. Queue���� Node ������
        int now = Q.front();
        Q.pop();

        cout << now << " : ";
        cout << num[now] << "\n";
        // 5. Now Node���� now -> next �� �� �ִ� Node ~ next node�� ã�´�
        for(int next = 1; next <= cntNode; next++){
            if(arr[now][next] == 0) continue;
            if(used[next] >= 1) continue;
        // 6. next���� queue�� �߰�
            used[next] = used[now] + 1;
            num[next] += num[now];
            Q.push(next);

        }
    }
    while(1){ // Code::Block���� ��Ȱ�ϰ� run�ǵ��� �ϴ� ����
    }
    return 0;
}

/*
// ������� ��� ��������Ʈ ����ϴ� ���
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
