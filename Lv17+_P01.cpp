#include <iostream>
using namespace std;

void getSum(int h[11]){
    int idx;
    cin >> idx;
    int result = 0;
    for(int i = idx; i < idx + 5; i++){
        result += h[i];
    }
    cout << result;
    return;
}

int main(){
    int h[11] = {3, 4, 1, 1, 2, 6, 8, 7, 8, 9, 10};
    getSum(h);
return 0;} // End of main function
