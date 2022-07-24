#include <iostream>
using namespace std;
int pingpong(int n){
    int tong = n;
    return tong + 10;
}


int main(){
    int stone = 0;
    cin >> stone;

    int ret = pingpong(stone);
    cout << ret;

    return 0;

}