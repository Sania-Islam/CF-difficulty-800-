#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int moves = 0;
    vector<char> s1, s2;
    int l = -1, r = -1;

    // Find the first and last occurrence of '1'
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            if (l == -1) l = i;  // First occurrence
            r = i;  // Last occurrence
        }
    }

    // If no '1' is present, no moves are needed
    if (l == -1) {
        cout << 0 << '\n';
        return;
    }

    // Move the prefix before 'l' to s1
    s1.insert(s1.end(), s.begin(), s.begin() + l);
    // Move the suffix from 'l' onwards to s2
    s2.insert(s2.end(), s.begin() + l, s.end());

    // Count zeros between first and last '1' in s2
    for (int i = 0; i < s2.size(); i++) {
        if (s2[i] == '0') moves++;
    }

    cout << moves << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
