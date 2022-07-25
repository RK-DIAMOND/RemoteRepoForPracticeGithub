#include <iostream>
using namespace std;

int main(){
    char a, b, c;
    cin >> a >> b >> c;

    char *p, *q, *r;
    // =eqi= char* p; \n char* q; \n char* r;
    // char* p, q, r; => q, r != pointer
    p = &a;
    q = &b;
    r = &c;

    *p = *p + 1;
    *q += 1;
    (*r)++;

    // Do not use *q++; -> == *(q++);
    // is equal to "Add 1 to the address of q"

    printf("%c %c %c", a, b, c);
    return 0;

}