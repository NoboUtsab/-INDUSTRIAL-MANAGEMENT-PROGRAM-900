#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,i,j,m;

    cin>>t;
    while(t--)
    {

        cin>>x;
        if(x>=1 && x<=9)
        {
            cout<<x<<endl;
        }
        else
        {
            int m=0;
            for(i=9; i>=1; i--)
            {
                if(x>=i)
                {
                    x=x-i;
                    m=10*m+i;
                }

            }
            string s = to_string(m);
            reverse(s.begin(),s.end());
            if(x!=0)
            {
                cout<<"-1"<<endl;
            }
            else
            {
                cout<<s<<endl;
            }




        }

    }
}
