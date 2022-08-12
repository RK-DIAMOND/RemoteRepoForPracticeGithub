#include <iostream>
#include <queue>
#include <vector>
#define MAX 255
using namespace std;
struct node{
    int y, x;
};

struct bbushungbbashung{
    bool operator()(node a, node b){
    // b가 priority 높으면 true, a가 높으면 false
        if(a.y != b.y) return a.y < b.y;
        else if(a.x != b.x) return a.x > b.x;
        else return false;
    }
};

bool node_op(node a, node b){
    if(a.y != b.y) return a.y > b.y;
    else if(a.x != b.x) return a.x < b.x;
    else return false;
}

int main(){
    priority_queue<int> qbi;
    priority_queue<char> qc;
    priority_queue<node, vector<node>, bbushungbbashung> qn;
    priority_queue<int, vector<int>, greater<int>> qs;
    qbi.push(6);
    qbi.push(5);
    qbi.push(8);
    qbi.push(11);
    qc.push('A');
    qc.push('Q');
    qc.push('R');
    qc.push('B');

    for(int _ = 0; _ < 4; _++){
        printf("%c\n", qc.top());
        qc.pop();
    }
    return 0;
} // End of main function
