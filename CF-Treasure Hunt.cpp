#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x, y, a;
        cin >> x >> y >> a;

        long long target = 2 * a + 1;

        long long fullCycle = 2 * (x + y);
        long long cycles = target / fullCycle;
        long long cnt = cycles * fullCycle;


        cnt += 2 * x;

        if (cnt > target) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
    return 0;
}
