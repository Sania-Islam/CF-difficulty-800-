#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t --)
    {
        int n;
        cin>>n;
        vector<int>a(n);
        unordered_map<int, int>freq;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            freq[a[i]]++;
        }
        int x = -1;
        for(int i=0; i<n; i++)
        {
              if(freq[a[i]] == 1)
              {
                  x = i+1;
                break;
              }
        }
       cout << x<<endl;

    }

}
