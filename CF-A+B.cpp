#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;
     cin>>t;
     while(t--)
     {
         int n, sum = 0;
         cin>>n;
         int x = n;
         while(x > 0)
         {
             sum+= x%10;
             x /= 10;
         }
         cout<< sum << "\n";
     }
}
