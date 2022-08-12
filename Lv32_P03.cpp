#include <iostream>
#include <algorithm>
#define MAX 255
using namespace std;

int main(){
    int b_[MAX];
    int bn;
    cin >> bn;
    int idx = 0;
    for(int i = 0; i < bn; i++){
        cin >> b_[idx];
        if(idx >= 2 && b_[idx] == b_[idx - 1] && b_[idx - 1] == b_[idx - 2]){
            b_[idx] = 0;
            b_[idx - 1] = 0;
            b_[idx - 2] = 0;
            idx -= 3;
        }
        idx++;
    }
    sort(b_, b_ + idx);
    for(int i = 0; i < idx; i++){
        printf("%d ", b_[i]);
    }
    return 0;
} // End of main function