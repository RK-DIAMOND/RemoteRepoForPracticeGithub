#include <iostream>
using namespace std;

char a, b;


void input(){
    cin >> a >> b;
}

int iscap(char x){
    if (x >= 'A' && x <= 'Z' ){
        return 1;
    }
    else{
        return 0;
    }

}


int main(){
    input();
    int capCount = iscap(a) + iscap(b);
    if(capCount == 2){
        cout << "대문자들";
    }
    else if(capCount == 1){
        cout << "대소문자";
    }
    else{
        for (int i = 0; i < 26; i++){
            printf("%c", 'a' + i);
        }

    }
    return 0;
}
