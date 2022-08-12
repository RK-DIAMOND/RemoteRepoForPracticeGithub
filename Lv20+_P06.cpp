#include <iostream>
using namespace std;

int main(){
    int n[7];
    for(int i = 0; i < 7; i++) cin >> n[i];
    for(int s = 3; s <= 6; s++){
        for(int i = 0; i <= s; i++){
            printf("%d ", n[i]);
        }printf("\n");
    }
return 0;} // End of main function
