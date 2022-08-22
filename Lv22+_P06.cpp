#include <iostream>
#include <queue>
using namespace std;

char sen[4][11];

int length(char c[]){
    int result = 0;
    while(1){
        if(c[result] == '\0') return result;
        result++;
    }
}

struct sibal{
    bool operator()(char a[], char b[]){
        return length(a) >= length(b);
    };
};

priority_queue<char*, vector<char*>, sibal> pq;

void prcs(){
    for(int i = 0; i < 4; i++){
        cin >> sen[i];
        pq.push(sen[i]);
    }
    while(!pq.empty()){
        cout << pq.top() << "\n";
        pq.pop();
    }
}

int main(){
    prcs();
return 0;}
