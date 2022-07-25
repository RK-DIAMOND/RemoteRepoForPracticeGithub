#include <iostream>
using namespace std;

int arr[2][5] = {
    {3, 2, 6, 2, 4},
    {1, 4, 2, 6, 5}
};

bool KFC(int target){
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 5; j++){
            if (target == arr[i][j]){
                return true;
            }
        }
    }
    return false;
}


int main(){
    int target;
    cin >> target;
    if(KFC(target)){
        cout << "값이 존재합니다";
    }
    else{
        cout << "값이 없습니다";
    }

    return 0;
}