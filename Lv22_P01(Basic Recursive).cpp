#include <iostream>
using namespace std;

char path[2] = {'_', '_'};

void rcsv(int lev){
    if(lev == 2){
        cout << path[0] << path[1] << "\n";
        return;
    }
    for(int i = 0; i < 3; i++){
        path[lev] = (char)(65 + i);
        rcsv(lev + 1);
        path[lev] = '_';
    }
}

int main(){
    rcsv(0);
return 0;}