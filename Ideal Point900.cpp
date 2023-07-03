#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,l,r;
        cin>>n>>k;
        int L=1,R=50;
        while(n--)
        {
            cin>>l>>r;
            if(l<=k && r>=k)
            {
                L=max(L,l);
                R=min(R,r);
            }
        }
        if(L==R)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
             cout<<"No"<<endl;
        }
    }
}
