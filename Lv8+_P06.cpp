#include <iostream>
using namespace std;

int main(){
    char a = 'A';
    int n = 0;
    cin >> a;
    cin >> n;

    for(int _ = 0; _ < n; _++){
        for(int _ = 0; _ < n; _++){
            printf("%c", a);
        }
        printf("\n");
    }

return 0;}