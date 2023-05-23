
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a,b,c,d;
    cin>>t;
    while(t--)
    {
        int count=0;
        cin>>n>>a>>b>>c>>d;
    int minw=(a-b)*n;
    int maxw=(a+b)*n;
        if(minw>c+d || maxw<c-d)
        {
            cout<<"No"<<endl;
        }
        else
        {
            cout<<"Yes"<<endl;
        }
    }
}
