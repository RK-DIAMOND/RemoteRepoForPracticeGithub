#include <iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    int *p, *t;
    p = &a;
    t = &b;

    int temp = *t;
    b = *p;
    *p = temp;

    printf("%d %d", *p, *t);

    return 0;
}