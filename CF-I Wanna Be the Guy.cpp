#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, p, vx;
    cin>>n>>p;
    set<int>levels;
    for(int i=0; i<p; i++)
    {
        cin>>vx;
        levels.insert(vx);
    }
    int q, vy;
    cin>>q;
    for(int i=0; i<q; i++)
    {
        cin>>vy;
        levels.insert(vy);
    }
    if(levels.size() == n)
    {
        cout << "I become the guy.\n";
    }
    else
    {
        cout << "Oh, my keyboard!\n";
    }
}
