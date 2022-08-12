#include <iostream>
using namespace std;

int main(){
    int h[8] = {5, 9, 4, 6, 1, 5, 8, 9};
    int idx, trg;
    cin >> idx >> trg;
    for(int i = idx + 1; i < 8; i++) if(h[i] == trg) cout << i - idx;
return 0;} // End of main function
