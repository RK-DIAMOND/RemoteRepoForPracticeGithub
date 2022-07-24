#include <iostream>
using namespace std;

int main(){
    char c[5];
    int count = 0;
    int cidx[5] = { 0 };
    cin >> c[0] >> c[1] >> c[2] >> c[3] >> c[4];

    for (int i = 0; i < 5; i++){
        if (c[i] == 'A'){
            cidx[count] = i;
            count++;
        }
    }

    printf("문자A는 %d개발견\n", count);

    for (int i = 0; i < count; i++){
        printf("%d번\n", cidx[i]);
    }

    return 0;
}