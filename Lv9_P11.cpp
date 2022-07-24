#include <iostream>
using namespace std;

struct Person{
    int age;
    int height;
};

Person a, b;


void input(){
    cin >> a.age >> a.height >> b.age >> b.height;
}

void output(){
    printf("%d %d", (a.age + b.age)/2, (a.height + b.height)/2);
}

int main(){
    input();
    output();
    return 0;
}