#include <iostream>
using namespace std;
struct ABC{
    int x;
    int y;
};

int main(){
    ABC t;
    int in = 0;
    int i = 0;
    cin >> t.x >> t.y;

    cout << t.x + t.y;
    return 0;
}
