#include <iostream>
#define L 11
using namespace std;


int main(){
    char s[L];
    cin >> s;
    char a, b;
    cin >> a >> b;
    for(int i = 0; i < L; i++) if(s[i] == a) s[i] = b;
    cout << s;
return 0;} // End of main function
