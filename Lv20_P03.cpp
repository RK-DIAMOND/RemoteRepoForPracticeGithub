#include <iostream>
using namespace std;

int dance[6];

void run(int x){
    if( x == 5 ){
        printf("%d ", dance[x]);
        return;
    }
    else{
        printf("%d ", dance[x]);
        run(x +1);
        printf("%d ", dance[x]);
    }
}

int main(){
    for(int i = 0; i < 6; i++){
        cin >> dance[i];
    }

    run(0);
    return 0;
}
