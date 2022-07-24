#include <iostream>
using namespace std;


int GOP(){
    int a, b;
    cin >> a >> b;
    return a * b;
}


int SUM(){
    int a, b;
    cin >> a >> b;
    return a + b;
}


int main(){
    int a = GOP();
    int b = SUM();

    if ( a > b ){
        printf("GOP>SUM");
    }
    else if ( a < b ){
        printf("GOP<SUM");
    }
    else{
        printf("GOP==SUM");
    }

    return 0;
    
}