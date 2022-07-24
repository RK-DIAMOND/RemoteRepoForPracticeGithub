#include <iostream>
using namespace std;


int main(){
    int student[6][2] = { 0 };
    int i = 0;
    int j = 0;

    for (i = 0; i < 6; i++){
        for (j = 0; j < 2; j++){
            cin >> student[i][j];
        }
    }

    int swapcount = 0;

    for (i = 0; i < 6; i++){
        if (student[i][0] < student [i][1]){
            swapcount++;
            int dummy = -1;
            dummy = student[i][0];
            student[i][0] = student[i][1];
            student[i][1] = dummy;
        }
        for (j = 0; j < 2; j++){
            printf("%d ", student[i][j]);
        }
        printf("\n");
    }
    printf("%d명", swapcount);


    return 0;
}