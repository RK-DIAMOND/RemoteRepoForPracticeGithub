#include <iostream>
using namespace std;

void printer(int y, int x, char c){
    for(int _ = 0; _ < y; _++){
        for(int _ = 0; _ < x; _++){
            cout << c;
        }
        cout << "\n";
    }
}

int main(){
    int y, x;
    char c;
    cin >> y >> x;
    cin >> c;
    printer(y, x, c);
    cout << "\n";
    printer(y, x, c);

return 0;} // End of main function
