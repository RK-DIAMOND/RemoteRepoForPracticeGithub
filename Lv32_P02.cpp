#include <iostream>
#include <algorithm>
#include <string>
#include <queue>
#define MAX 1000001
#define MNL 20 // Max Name Length
using namespace std;
int nP; // number of Player
struct player{
    char name[MNL];
    int score;
    int order;
};

bool iSN(char a[], char b[]){ // isSameName
    for(int i = 0; i < MNL; i++){
        if(a[i] == '\0' && b[i] == '\0') return true;
        else if(a[i] == '\0' || b[i] == '\0') return false;
        else if(a[i] != b[i]) return false;
    }
    return true;
}

bool isTheySame(player a[], char b[][MNL]){ // If names of top 3 players are same as previous case,
    return iSN(a[0].name, b[0]) && iSN(a[1].name, b[1]) && iSN(a[2].name, b[2]);
}

bool comp(player a, player b){
    if(a.score != b.score) return a.score > b.score;
    else return a.order > b.order;
}

void charArrayTyper(char* add, char input[]){
    for(int i = 0; (input[i] != '\0' || *(add + i) != '\0') && i < MNL; i++){
        *(add + i) = input[i];
    }
}

int main(){
//  freopen("trash.txt", "r", stdin);
    player null = {"", 0, 0};
    player top4[4] = {null, null, null, null};
    char GSB_namelist[3][MNL] = {"", "", ""};
    // GSB_namelist will contain
    // names of pre-Gold, Silver, and Bronze player's name
    cin >> nP;
    for(int i = 0; i < nP; i++){
        player newplayer;
        cin >> newplayer.name >> newplayer.score;
        newplayer.order = i;
        top4[3] = newplayer;
        sort(top4, top4 + 4, comp);
        if(isTheySame(top4, GSB_namelist)) continue; // If names of top 3 players are same as previous case,
        // We would not update the GSB_namelist,
        // and would not print the list of top 3 players(because they have no change between previous print).
        for(int j = 0; j < 3; j++){
            charArrayTyper(&GSB_namelist[j][0], top4[j].name);
        }
        cout << GSB_namelist[0] << " " << GSB_namelist[1] << " " << GSB_namelist[2] << "\n";
    }
    return 0;
} // End of main function