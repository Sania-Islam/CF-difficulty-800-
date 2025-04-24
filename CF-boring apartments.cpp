#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int total=0;
    for(int i=1; i<=9; i++)
    {
        int sum=0;
        for(int j=1; j<=4; j++)
        {
            sum = sum*10+i;
            total+=j;
            if(sum == n)
            {
                cout<< total << "\n";
                return;
            }
        }
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cout<<fixed;
    cout<<setprecision(10);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
