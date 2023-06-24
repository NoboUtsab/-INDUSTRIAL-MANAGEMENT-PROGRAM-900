#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long  int t,a,b,c,d,n,m;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>d;
        n=a*d;
        m=c*b;
        if(n==m)
        {
            cout<<"0"<<endl;
        }
        else if( m!=0 && n%m==0 || n!=0 && m%n ==0)
        {
            cout<<"1"<<endl;
        }
        else
        {
            cout<<"2"<<endl;
        }
    }
}
