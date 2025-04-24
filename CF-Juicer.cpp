#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, b, d, sum=0;
    cin>>n>>b>>d;
    vector<int>a(n);
    for(auto &x : a)
    {
        cin>>x;
    }
    int empty_sec =0;
    for(auto &x : a)
    {
        if(x <= b)
            {sum+=x;
            if(sum > d)
                {empty_sec++;
            sum=0;
            }
        }
    }
    cout<< empty_sec << "\n";
}
