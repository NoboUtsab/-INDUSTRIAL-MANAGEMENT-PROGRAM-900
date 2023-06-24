#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q,a,b,c,ans,cal;
    cin>>q;
    while(q--)
    {
        cin>>a>>b>>c;
        ans=abs(a-b)+abs(b-c)+abs(a-c);
        for(int da=-1;da<=1;da++)
        {
            for(int db=-1;db<=1;db++)
            {
                for(int dc=-1;dc<=1;dc++)
                {
                    int na=a+da;
                    int nb=b+db;
                    int nc=c+dc;
                    cal=abs(na-nb)+abs(nb-nc)+abs(na-nc);
                    ans=min(ans,cal);
                }
            }
        }
        cout<<ans<<endl;
    }
}
