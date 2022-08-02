#include <iostream>
using namespace std;


void run(int x){
    if( x == 0 ){
        printf("%d ", x);
        return;
    }
    else{
        printf("%d ", x);
        run(x - 1);
        printf("%d ", x);
    }
}

int main(){
    int in;
    cin >> in;
    run(in);
    return 0;
}
