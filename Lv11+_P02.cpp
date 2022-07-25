#include <iostream>
using namespace std;

int arr[3][3] = {
    {1, 1, 1},
    {1, 2, 1},
    {3, 6, 3}
};

int count(int n){
    int result = 0;
    for (int i = 0; i < 9; i++){
        if (n == arr[i/3][i%3]){
            result++;
        }
    }
    return result;
}

int main(){
    int in = 0;
    cin >> in;
    cout << count(in);
    return 0;
}