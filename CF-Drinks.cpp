#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n, v, x = 0;
    cin>>n;

    for(int i=0; i<n;i++)
    {
        cin>>v;
        x += v;
    }
    double res = (x*100)/(n*100);
    cout<<fixed<< setprecision(12) << res<< "\n";
}
