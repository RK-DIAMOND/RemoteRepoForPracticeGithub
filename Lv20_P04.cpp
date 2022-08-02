#include <iostream>
using namespace std;

int n = 0;

void run(int x){
    if(n == 3){
        printf("%d ", x);
        return;
    }
    else{
        
        n++;
        run(x +2);
        printf("%d ", x);
    }

}

int main(){
    int in;
    cin >> in;
    run(in);
    return 0;
}
