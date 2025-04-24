#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int num, digit, x=0;
        cin>>num;
        for(int i=0, digit = num; digit; i++)
        {
            if(digit%10)
            {
                x++;
            }
            digit/=10;
        }
        cout<< x<< "\n";
         for(int i=0; num; i++)
        {
            if(num%10)
            {
               cout<< (num%10)*pow(10, i)<< " ";
            }
            num/=10;
        }
        cout<< "\n";
    }
}
