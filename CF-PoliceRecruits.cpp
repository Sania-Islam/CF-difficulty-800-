#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, cnt=0;
    cin>>n;
    vector<int>a(n);
    int police=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i] == -1)
        {
            if(police ==0)
                {
                     cnt++;
                }
                 else
                 {
                     police--;
                 }
        }
        else
        {
            police+=a[i];
        }
    }
    cout<< cnt<< "\n";
}
