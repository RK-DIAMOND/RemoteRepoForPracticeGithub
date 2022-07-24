#include <iostream>
using namespace std;

int power(int n, int arr[3][3]){
    int result = 0;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (arr[i][j] % n == 0 && arr[i][j] > 0){
                result++;
            }
        }
    }
    return result;
}

int main(){
    int ma[3][3] = {
        {3, 5, 14},
        {2, 3, 9},
        {6, 2, 7}
    };
    int in;
    cin >> in;

    cout << power(in, ma);
    return 0;
}