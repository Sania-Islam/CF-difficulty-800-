#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int cnt1=0, cnt2 =0;
        string s;
        cin>>s;

        for(int i=0; i<s.size(); i++)
        {
           if(s[i] == 'A')
            cnt1++;
           else
            cnt2++;
        }

        if(cnt1 > cnt2)
            cout<< "A"<<endl;
        else
            cout<< "B"<<endl;

    }
}
