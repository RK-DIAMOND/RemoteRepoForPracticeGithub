#include <iostream>
using namespace std;

int main(){
    int in;
    cin >> in;

    int A[5] = {2, 1, 2, 4, 5};
    int B[3][3] = {
        {2, 5, 3},
        {4, 5, 7},
        {8, 7, 2}
    };

    int count = 0;

    int i = 0;
    int j = 0;

    for (i = 0; i < 5; i ++){
        if (in == A[i]){
            count++;
        }
    }

    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            if (in == B[i][j]){
                count++;
            }
        }
    }

    cout << count;
    return 0;
}