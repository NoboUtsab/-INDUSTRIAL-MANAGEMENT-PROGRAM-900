#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,H,M,h,m,n,ma;
    cin>>t;
   while(t--)
   {
       cin>>n>>H>>M;
       int time=60*H+M;
      int  ans=24*60;

       for(int i=0;i<n;i++)
       {
           cin>>h>>m;
           ma=60*h+m-time;
           if(ma<0)
           {
               ma+=24*60;
           }
           ans=min(ans,ma);


       }
 cout<<ans/60<<" "<<ans%60<<endl;
   }
}
