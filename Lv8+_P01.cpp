#include <iostream>
using namespace std;

bool pass(int n){
    if(n >= 5){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int i = 0;
    int ar[6] = { 0 };
    for (i = 0; i < 6; i++){
        cin >> ar[i];
    }
    for (i = 0; i < 6; i++){
        if(pass(ar[i])){
            printf("%d번은 %d점 합격\n", i, ar[i]);
        }
        else{
            printf("%d번은 %d점 불합격\n", i, ar[i]);
        }
    }
}