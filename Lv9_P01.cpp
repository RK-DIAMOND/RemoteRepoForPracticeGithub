#include <iostream>
using namespace std;

int main(){
    int arr[8] = {4, 3, 6, 1, 3, 1, 5, 3};
    int in;
    cin >> in;

    int i = 0;
    int count = 0;
    for (i = 0; i < 8; i++){
        if (arr[i] == in){
            count++;
        }
    }
    printf("숫자%d개수는%d개", in, count);
    return 0;
}
