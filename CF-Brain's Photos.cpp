#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    char a[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    bool isColor = false;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == 'C' || a[i][j] == 'M' || a[i][j] == 'Y') {
                isColor = true;
                break;
            }
        }
        if (isColor) break;
    }

    if (isColor) {
        cout << "#Color\n";
    } else {
        cout << "#Black&White\n";
    }

    return 0;
}
