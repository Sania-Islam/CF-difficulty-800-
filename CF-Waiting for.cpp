#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int waiting_people =0;
    for(int i=0; i<n; i++)
    {
        char type;
        int num;
        cin>>type>>num;

        if(type == 'P')
        {
            waiting_people += num;
        } else if(type == 'B')
        {
            if(waiting_people >= num)
            {
                waiting_people-= num;
                cout<< "NO\n";
            }
            else
            {
                cout << "YES\n";
                waiting_people = 0;
            }
        }
    }
    return 0;
}
