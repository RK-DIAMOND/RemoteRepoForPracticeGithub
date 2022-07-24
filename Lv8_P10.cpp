#include <iostream>
using namespace std;

int main(){
    int arr[3][4] = {
        {4, 3, 1, 1},
        {3, 1, 2, 1},
        {0, 0, 1, 2}
    };
    
    int in = 0;
    cin >> in;
    int count = 0;
    int i = 0;
    for(i = 0; i < 12; i++){
        if(in == arr[i / 4][i % 4]){
            count++;
        }
    }
    printf("%d개 존재합니다", count);

    return 0;
}