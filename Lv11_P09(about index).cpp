#include <iostream>
using namespace std;

int main(){
    char in[8];
    for (int i = 0; i < 8; i++){
        cin >> in[i];
    }
    char big[8];
    char small[8];
    int bigidx = 0;
    int smallidx = 0;
    for (int i = 0; i < 8; i++){
        if (in[i] >= 'A' && in[i] <= 'Z'){
            big[bigidx] = in[i];
            bigidx++;
        }
        if (in[i] >= 'a' && in[i] <= 'z'){
            small[smallidx] = in[i];
            smallidx++;
        }
    }
    printf("big=");
    for (int i = 0; i < bigidx; i++){ // 조건이 i < 8이면 쓰레기값 출력될 수 있다
        cout << big[i];
    }
    printf("\nsmall=");
    for (int i = 0; i < smallidx; i++){
        cout << small[i];
    }

    return 0;
}