#include<bits/stdc++.h>
using namespace std;
int main()
{
      int n,q;
    cin>>n>>q;
    int a[n],b[n];
    for(int i=1;i<=n;i++)
        cin>>a[i];

    sort(a+1,a+n+1);
    reverse(a+1,a+n+1);
    for(int i=1;i<=n;i++)
        b[i]=b[i-1]+a[i];

    while(q--)
    {
        int x,y;
        cin>>x>>y;
        y=x-y;
        cout<<b[x]-b[y]<<endl;
    }
}
