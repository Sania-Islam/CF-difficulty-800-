#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    stack<char> st;

    if(s.size()==2)
    {
        if(s[0] == s[1])
            cout<< "1\n";
    }
    else
    {
        for (char c : s) {
        if (!st.empty() && st.top() == c) {
            st.pop();
        } else {
            st.push(c);
        }
    }
     cout << st.size() << "\n";
    }

}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
