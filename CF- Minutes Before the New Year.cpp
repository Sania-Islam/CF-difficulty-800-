#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b;
        cin>>a>>b;
        int x = (a*60)+b;
        int z = 1440;

        cout<< z-x  << "\n";
    }
}
