#include <iostream>
using namespace std;

char* isExist(int arr[3][3], int c){
    for(int y = 0; y < 3; y++) for(int x = 0; x < 3; x++) if(c == arr[y][x]) return "존재\n";
    return "미발견\n";
}

int main(){
    int h[3][3] = {
        3, 5, 9,
        4, 2, 1,
        5, 1, 5
    };
    int in[3];
    for(int i = 0; i < 3; i ++){
        cin >> in[i];
        cout << in[i] << ":" << isExist(h, in[i]);
    }
return 0;} // End of main function
