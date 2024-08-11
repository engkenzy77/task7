#include <bits/stdc++.h>
using namespace std;
int main () {
    int r,c;
    cin >> r >> c;
    int justice_league[r][c];
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            cin >> justice_league[i][j];
        }
    } 

    int villains[r][c];
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            cin >> villains[i][j];
        }
    }

int justiceWins = 0, villainWins = 0;

    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            if (justice_league[i][j] > villains[i][j]) {
                justiceWins++;
            } else if (villains[i][j] > justice_league[i][j]) {
                villainWins++;
            }
        }
    }

    if (justiceWins > villainWins) {
        cout << "Justice League" << endl;
    } else if (villainWins > justiceWins) {
        cout << "Villains" << endl;
    } else {
        cout << "Tie" << endl;
    }

    return 0;
}