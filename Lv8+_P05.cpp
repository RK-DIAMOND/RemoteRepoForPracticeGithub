#include <iostream>
using namespace std;

int main(){
    char a = 'A';
    char b = 'B';
    int n = 0;
    cin >> a;
    cin >> b;
    cin >> n;
    int i = (int)(a);

    for (int _ = 0; _ < n; _++){
        for (i = (int)(a); i <= (int)(b); i++){
            printf("%c", i);
        }
        printf("\n");
    }


return 0;}