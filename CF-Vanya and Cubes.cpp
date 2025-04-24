#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum=0, count=0, s2=0;
    cin>>n;
    for(int i =1; i<n; i++)
    {
        while(s2<n)
        {sum+=i;
        s2 += sum;
        count++;}
    }
    cout<< s2 << "\n";
    cout<< count<< "\n";
}
