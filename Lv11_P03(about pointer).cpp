#include <iostream>
using namespace std;

int main(){
    int a = 0;
    char gd = 'a';
    cin >> a >> gd;

    int* p;
    p = &a;

    char* t;
    t = &gd;

    cout << *&a;
    // equal to cout << *(&a);
            //  cout << *&a; // OK
    printf(" ");
    cout << *t;
    // cout << *(&gd);
            // *&gd; OK

    return 0;
}