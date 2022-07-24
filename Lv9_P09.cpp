#include <iostream>
using namespace std;

char ca[2][3] = {
    {'F', 'E', 'W'},
    {'D', 'C', 'A'}
};

void findCh(char x){
    int i = 0;
    int j = 0;
    int count = 0;
    for (i = 0; i < 2; i++){
        for (j = 0; j < 3; j++){
            if (x == ca[i][j]){
                count++;
            }
        }
    }
    if (count > 0){
        cout << "발견";
    }
    else{
        cout << "미발견";
    }

}

int main(){
    char in;
    cin >> in;
    findCh(in);

    return 0;
}