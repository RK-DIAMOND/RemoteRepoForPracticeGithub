#include <iostream>
using namespace std;
void input(char *a, char *b, char *c){
    cin >> *a >> *b >> *c;
}

int main(){
    char ar[17];
    char a = ' ';
    char b = ' ';
    char c = ' ';
    input(&a, &b, &c);

    int i = 0;
    for(i = 0; i < 17; i++){
        if (i <= 6){
            ar[i] = a;
        }
        else if (i <= 12){
            ar[i] = b;
        }
        else{
            ar[i] = c;
        }
    }
    for (i = 16; i >= 0; i--){
        printf("%c", ar[i]);
    }

return 0;}