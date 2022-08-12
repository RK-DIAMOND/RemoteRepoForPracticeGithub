#include <iostream>
#define L 6
using namespace std;


int main(){
    int arr[L];
    for(int i = 0; i < 2; i++){
        cin >> arr[i];
    }
    for(int i = 2; i < L; i++){
        arr[i] = arr[i - 1] * arr[i - 2];
    }
    cout << arr[L - 1];
    // for(int i = 0; i < L; i++){
    //     printf("%d ", arr[i]);
    // }
return 0;} // End of main function