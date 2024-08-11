#include <bits/stdc++.h>
using namespace std;
int main () {
    int n;
    // n = hight of the pyramid
    cin >> n;
        for (int i = 1; i <= n; ++i) {
            for (int j = 0; j < i; ++j) {
                cout << "*" <<endl;
        }
    }

    return 0;

}