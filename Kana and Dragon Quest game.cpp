#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,h,n,m,va=0,ls=0;
    cin>>t;
    while(t--)
    {
        cin>>h>>n>>m;

      int flag=0;
        while(h>=20 && n>0)
        {
            h=(h/2)+10;
            n--;



        }
        while(h>=0 && m>0)
        {
            h=h-10;
            m--;
            if(h<=0)
            {
                flag=1;
                break;
            }
        }

        if(flag==1)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
}
