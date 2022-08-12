#include <iostream>
using namespace std;

char* isExist(char s[100], char c){
    for(int i = 0; i < 100; i++){
        if(s[i] == '\0') return "미발견";
        if(s[i] == c) return "발견";
    }
    return "미발견";
}
int main(){
    char h[5] = "MTKC";
    char in;
    cin >> in;
    cout << isExist(h, in);
return 0;} // End of main function
