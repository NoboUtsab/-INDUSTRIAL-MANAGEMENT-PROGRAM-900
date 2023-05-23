#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,pos=0,m=1;
    cin>>n;
    int  a[n];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];

    }

    for(int i=0; i<n;i++)
    {
     if(a[i]>=a[i-1])
     {
         pos++;
         m=max(m,pos);
     }
     else
     {
         pos=1;
     }
    }
    cout<<m<<endl;
}
