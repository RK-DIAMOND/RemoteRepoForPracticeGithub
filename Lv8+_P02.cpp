#include <iostream>
using namespace std;


int main(){
    char line[6] = {'D', 'T', 'A', 'B', 'W', 'Q'};
    char in;
    cin >> in;
    int i = 0;
    int j = 0;
    for (i = 0; i < 6; i++){
        if(line[i] == in){
            j = i;
            i = 6;
            // break;
            
        }
    }
    printf("%d번 INDEX", j);
    //printf("%d번 INDEX", i);

}