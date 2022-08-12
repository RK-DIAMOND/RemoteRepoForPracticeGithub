#include <iostream>
#define Y 3
#define X 5
using namespace std;

int main(){
    char h[Y][X] = {
        "ATKB", "CZFD", "HGEI"
    };

    char in;
    cin >> in;
    int oy, ox;
    cin >> oy >> ox;
    for(int y = 0; y < Y; y++){
        for(int x = 0; x < X; x++){
            if(in == h[y][x]){
                cout << h[y + oy][x + ox];
                return 0;
            }
        }
    }
return 0;} // End of main function
