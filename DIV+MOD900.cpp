#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,r,a,m;
        cin>>l>>r>>a;
        if(l<a)
        {
                      r=a-1;
            m=(r/a)+(r%a);


        }
        else
        {if(r%a==0)
        {
            r=r-1;
            m=(r/a)+(r%a);

        }
        else

        {
            m=(r/a)+(r%a);
        }

        }

        cout<<m<<endl;
    }
}
