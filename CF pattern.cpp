/*#include <bits/stdc++.h>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;

    for (int i = 1; i <= r; i++) {
        if (i % 2 == 1) {
            for (int j = 1; j <= c; j++) cout << "#";
        }
        else if (i % 4 == 2) {
            for (int j = 1; j < c; j++)
            {
                cout << ".";
            }
           cout << "#";
        }
        else {
            cout << "#";
            for (int j = 2; j <= c; j++) cout << ".";
        }
        cout << "\n";
    }

    return 0;
}*/
#include <bits/stdc++.h>
using namespace std ;
int main() {
while(1){
    long int n,d,r,ans;
    cin>>n>>d>>r;
    if(n==0&&d==0&&r==0)break;
    long int m[n],e[n];
    for(int i=0;i<n;i++){
        cin>>m[i];
    }
    sort(m,m+n);
for(int i=0;i<n;i++){
        cin>>e[i];
    }
    sort(e,e+n);
    for(int i=0;i<n;i++){
       long int sum=m[i]+e[i];
        if(sum>d){
           sum=(sum-d);
        }
        else
        sum=0;
        ans=sum*r;
    }
        cout<<ans<<endl ;
}
    return 0;
}

