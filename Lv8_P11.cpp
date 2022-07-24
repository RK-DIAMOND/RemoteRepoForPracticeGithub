#include <iostream>
using namespace std;

void starBox(){
    int i = 1;
    for (i = 1; i <= 20; i++){
        if (i % 2 == 0){}
        else{
            printf("%d ", i);
        }
    }
}


void macDoll(){
    int i = 'H';
    for (i = 'H'; i >= 'A'; i--){
        printf("%c ", i);
    }
}


void copyBean(){
    int i = -5;
    for (i = -5; i <= 5; i++){
        printf("%d ", i);
    }
}

int main(){

    int coffee = 0;
    cin >> coffee;

    if(coffee >= 3500 && coffee <= 5000){
        starBox();
    }
    else if(coffee >= 2500){
        macDoll();
    }
    else{
        copyBean();
    }
    
    return 0;
}