#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string p, s;
        cin >> p >> s;

        int i = 0, j = 0;
        bool valid = true;

        while (i < p.size() && j < s.size()) {
            if (p[i] != s[j]) {
                valid = false;
                break;
            }

            int count = 0;
            char current = s[j];
            while (j < s.size() && s[j] == current) {
                count++;
                j++;
            }

            if (count != 1 && count != 2) {
                valid = false;
                break;
            }

            i++;
        }

dkxkmdxkms
        if (valid && i == p.size() && j == s.size()) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
