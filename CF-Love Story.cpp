#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1 = "codeforces";
        string s2;
        cin>>s2;
        int count=0;
        for( int i=0; i<s1.size(); i++)
        {
            if(s1[i] != s2[i])
                count++;
        }
        cout<< count<< "\n";
    }
}
