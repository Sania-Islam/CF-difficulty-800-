#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a(n);
        for(auto &i : a)
        {
            cin>>i;
        }
        int min_el = *min_element(a.begin(), a.end());
        int mx_el = *max_element(a.begin(), a.end());
        if(mx_el - min_el > 1)
        {
            cout<< "NO\n";
        }
        else
        {
            cout<< "YES\n";
        }
    }
}
