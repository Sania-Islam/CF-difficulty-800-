#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, count=0;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    //bool swap_flag = false;
    int i, j;
     int mx;

        for(int i=0; i<n -1; i++)
        {
           mx = a[0];

            if(a[i] > mx)
            {
               // swap(a[i] , mx);
                mx = a[i];
                count++;
                //swap_flag = true;
            }
        }

    cout<< count << "\n";
     for(int i=0; i<n; i++)
    {
        cout<<a[i]<< " ";
    }
}
