/*#include<bits/stdc++.h>
using namespace std;
int main()

bool cont7(int x)
{
    while(x)
    {
        if(x%10 == 7)
            return true;
        x/=10;
    }
    return false;
}

void solve()
{
    int n;
    cin>>n;
    if(cont7(n))
    {
        cout<< 0 << "\n";
        return;
    }

}
{
     int t;
    cin >> t;
    while (t--)
     solve();

}*/
#include <iostream>
using namespace std;

bool contains7(int x) {
    while (x) {
        if (x % 10 == 7) return true;
        x /= 10;
    }
    return false;
}

void solve() {
    int n;
    cin >> n;

    int moves = 0;
    while (!contains7(n)) {
        n += 9; // Add the smallest valid number (9)
        moves++;
    }

    cout << moves << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}
