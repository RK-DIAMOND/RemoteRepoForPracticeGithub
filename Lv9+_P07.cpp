#include <iostream>
using namespace std;

void getPositiveIntInput(int *n){
    cin >> *n;
    if (*n > 0){}
    else{
        getPositiveIntInput(n);
    }
}

struct PROJECT{
    int num;
    char id;
    int vect[4];
};

int main(){
    PROJECT z;
    int in = -1;
    getPositiveIntInput(&in);
    if (in < 10){
        z.num = 5;
        z.id = 'G';
        for (int i = 0; i < 4; i++){
            z.vect[i] = i + 1;
        }
    }
    else if (in < 100){
        z.num = 8;
        z.id = 'T';
        int temp[4] = {5, 1, 2, 3};
        for (int i = 0; i < 4; i++){
            z.vect[i] = temp[i];
        }
    }
    else{
        z.num = 10;
        z.id = 'Q';
        int temp[4] = {9, 1, 6, 2};
        for (int i = 0; i < 4; i++){
            z.vect[i] = temp[i];
        }
    }
    printf("%d\n%c\n", z.num, z.id);
    for (int i = 0; i < 4; i++){
        printf("%d ", z.vect[i]);
    }

   return 0;
}