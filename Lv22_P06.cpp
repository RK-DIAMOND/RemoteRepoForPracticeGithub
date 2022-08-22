#include <iostream>
#include <string>
using namespace std;

string inp[4];

void getInput(){
    for(int i = 0; i < 4; i++) cin >> inp[i];
}

int main(){
    getInput();
    int l[4];
    for(int i = 0; i < 4; i++) l[i] = inp[i].length();
    int max = -1;
    int min = 32767;
    int maxidx = -1;
    int minidx = -1;
    for(int i = 0; i < 4; i++){
        if(min > l[i]){
            min = l[i];
            minidx = i;
        }
        if(max < l[i]){
            max = l[i];
            maxidx = i;
        }
    }
    printf("긴문장:%d\n짧은문장:%d", maxidx, minidx);
return 0;}
