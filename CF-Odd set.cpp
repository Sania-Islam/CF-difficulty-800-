#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, even=0, odd=0;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(2*n);
        for(int i=0; i<2*n; i++)
        {
            cin>>v[i];
            if(v[i]%2 == 0)
                even++;
            else
                odd++;
        }
        if(even == n && odd == n)
            cout<< "Yes\n";
        else
            cout<< "No\n";
        odd = 0;
        even =0;
    }
}
