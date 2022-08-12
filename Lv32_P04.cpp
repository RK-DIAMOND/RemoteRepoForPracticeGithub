#include <iostream>
#include <algorithm>
#define MAX 101
using namespace std;



int main(){
    char lineup[5][MAX];
    int len[5];
    for(int i = 0 ; i < 5; i++){
        cin >> lineup[i];
    }
    for(int i = 0; i < 5; i++){
        int c;
        for(c = 0; c < MAX; c++){
            char ch = lineup[i][c];
            if(ch < '0' || ch > '9'){
                len[i] = c;
                break;
            }
        }
    }
    int line[2];
    for(int i = 0; i < 2; i++){
        cin >> line[i];
    }
    for(int i = 0; i < 2; i++){
        sort(lineup[line[i]], lineup[line[i]] + len[line[i]]);
    }
    for(int i = 0; i < 5; i++){
        printf("%d ", lineup[i][0]);
    }
    // for(int i = 0; i < 5; i++){
    //     cout << "length of " << i+1 <<" line is: " << len[i] << "\n";
    // }




    return 0;
} // End of main function