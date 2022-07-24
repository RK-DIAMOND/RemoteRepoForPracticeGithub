#include <iostream>
using namespace std;

int counter(char crr[6], char ci[2]){
    int i = 0;
    int j = 0;
    int r = 0;

    for (i = 0; i < 2; i++){
        for (j = 0; j < 6; j++){
            if (ci[i] == crr[j]){
                r++;
                break;
            }
        }
    }

    return r;
}


int main(){
    char crr[6] = {'A', 'F', 'G', 'A', 'B', 'C'};
    char ci[2] = {'Z', 'X'};
    int i = 0;
    for (i = 0; i < 2; i++){
        cin >> ci[i];
    }


    int count = counter(crr, ci);
    if (count >= 2){
        cout << "와2개";
    }
    else if (count == 1){
        cout << "오1개";
    }
    else{
        cout << "우0개";
    }

    return 0;
}
