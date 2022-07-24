#include <iostream>
using namespace std;


int main(){
    int AR[6] = {3, 4, 2, 5, 7, 9};
    int i = 0;
    int a = -1;
    int b = -1;
    cin >> a >> b;
    int dummy = AR[a];
    AR[a] = AR[b];
    AR[b] = dummy;

    for (i = 0; i < 6; i++){
        printf("%d ", AR[i]);
    }

    return 0;
}
