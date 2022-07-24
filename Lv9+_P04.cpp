#include <iostream>
using namespace std;

int main(){
    int I[3][3] = {
        {10, 3, 20},
        {60, 30, 40},
        {20, 30, 40}
    };

    int in[2];
    cin >> in[0] >> in[1];
    int count = 0;
    int i;

    for (i = 0; i < 9; i++){
        if (in[0] <= I[i/3][i%3] && in[1] >= I[i/3][i%3]){
            count++;
        }
        else if (in[1] <= I[i/3][i%3] && in[0] >= I[i/3][i%3]){
            count++;
        }
        else{}
    }

    cout << count;

    return 0;
}