#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        if(n==k)
        {
            cout<<"0"<<endl;
        }
        else
        {
            int m=k-n;
            int l=n+m;
            cout<<l<<endl;
        }
    }
}
