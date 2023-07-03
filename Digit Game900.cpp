#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string s;
        cin>>s;
        int ro=0,re=0,bo=0,be=0;

       for(int i=0;i<n;i++)
       {
            int a=s[i]-48;
            if(i%2==0)
           {
               if(a%2!=0)
               {
                 ro++;
               }


           }
           else
           {
                if(a%2==0)
               {
                   be++;
               }
           }
       }
       if(n%2==0)
       {
           if(be>0)
           {
               cout<<"2"<<endl;
           }
           else
           {
               cout<<"1"<<endl;
           }
       }
       else
       {
            if(ro>0)
           {
               cout<<"1"<<endl;
           }
           else
           {
               cout<<"2"<<endl;
           }
       }
    }
}
