#define _NO_MORE_HARD_CODING
#define MAX 150
#define MIN -15000001
#include <iostream>
#include <vector>
using namespace std;

int map[MAX + 7];
int dp[MAX + 7];

int maxi(int a, int b){
    if(a > b) return a;
    return b;
}

int main(){
    int N;
    cin >> N;
    for(int i = 0; i < N; i++) cin >> map[i];
    dp[0] = MIN;
    dp[1] = MIN;
    dp[2] = map[1];
    dp[3] = MIN;
    dp[4] = dp[2] + map[3];
    dp[5] = MIN;
    dp[6] = dp[4] + map[5];
    dp[7] = map[6];
    for(int i = 8; i < N + 7; i++){
        if(i > 7){
            int a = dp[i - 2] + map[i - 1];
            int b = dp[i - 7] + map[i - 1];
            dp[i] = max(a, b);
        }
    }
    int max_ = dp[N];
    for(int i = 0; i<= 6; i++){
        if(dp[N + i] > max_){
            max_ = dp[N +i];
        }
    }
    cout << max_;
return 0;} // End of main function
