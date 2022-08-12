#include <iostream>
#include <queue>
using namespace std;

struct nb{
    int target;
    int numb;
};

bool operator<(nb low, nb high){
    if(low.numb < high.numb) return true;
    return false;
}

priority_queue<nb> pq;

int howmany(int vect[3][3], int t){
    int result = 0;
    for(int y = 0; y < 3; y++){
        for(int x = 0; x < 3; x++){
            if(vect[y][x] == t) result++;
        }
    }
    return result;
}

int main(){
    int vect[3][3] = {
        3, 7, 4,
        2, 2, 4,
        2, 2, 5
    };
    int target[3];
    int number[3];
    for(int i = 0; i < 3; i++){
        cin >> target[i];
        number[i] = howmany(vect, target[i]);
        pq.push({target[i], number[i]});
    }
    /*
    int idx = -1;
    int max = -1;
    for(int i = 0; i < 3; i++){
        if(max < number[i]){
            max = number[i];
            idx = i;
        }
    }
    cout << target[idx];
    */
   cout << pq.top().target;
return 0;} // End of main function
