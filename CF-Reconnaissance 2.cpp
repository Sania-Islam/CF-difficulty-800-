#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;

    int min_diff = INT_MAX;
    int idx1 = 0, idx2 = 0;

    for (int i = 0; i < n; i++)
    {
        int j = (i + 1) % n;
        int diff = abs(a[i] - a[j]);

        if (diff < min_diff)
        {
            min_diff = diff;
            idx1 = i;
            idx2 = j;
        }
    }


    cout << idx1 + 1 << " " << idx2 + 1 << endl;

    return 0;
}
