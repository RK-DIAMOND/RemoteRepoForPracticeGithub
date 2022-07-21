#include <iostream>
using namespace std;

char a, b;


void input(){
    cin >> a >> b;
}

int iscap(char x){
    if (x >= 'A' && x <= 'Z' ){
        return 1;
    }
    else{
        return 0;
    }

}


int main(){
    input();
    cout << iscap(a);
    cout << iscap(b);




    return 0;
}
