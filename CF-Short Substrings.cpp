#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b, c, n, s, maxt;
        cin>>a>>b>>c>>n;
        maxt = max(a, max(b, c));
        s = a+b+c+n;
        if(s%3 == 0 && s/3 >= maxt) cout<< "YES\n";
        else cout<< "NO\n";
    }
}

