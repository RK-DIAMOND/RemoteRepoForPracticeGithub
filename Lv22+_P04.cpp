#include <iostream>
using namespace std;


int main(){
    int a[2];
    cin >> a[0] >> a[1];
    for(int _ = 0; _ < 3; _++){
        for(int y = 0; y < 2; y++){
            for(int x = 0; x < 3; x++){
                printf("%d ", a[y]);
            }
            printf("\n");
        }
        printf("\n");
    }
return 0;}
