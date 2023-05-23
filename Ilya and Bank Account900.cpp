#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    if(n>=0)
    {
        cout<<n<<endl;
    }
    else
    {
        int a=-1;
        n=abs(n);
         int l=n/10;
         int ll=n%10;
        int bl=(l/10)*10+ll;
        m=min(l,bl);
        if(m==0)
        {
            cout<<"0"<<endl;
        }
        else
        {
            cout<<a*m<<endl;
        }

    }
}
