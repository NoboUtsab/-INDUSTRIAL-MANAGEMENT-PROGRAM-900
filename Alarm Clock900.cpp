#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long t,a,b,c,d,m,n;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>d;
        if(a<=b )
        {
            cout<<b<<endl;
        }
        else
        {
            if(d>=c)
            {
                cout<<"-1"<<endl;
            }
            else
            {

                    m=(a-b)/(c-d);
               if((a-b)%(c-d)!=0)
               {
                   m=m+1;
               }



              n=b+(m*c);
              cout<<n<<endl;

            }

        }
    }
}
