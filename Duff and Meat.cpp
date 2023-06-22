#include<bits/stdc++.h>
using namespace std;
 int main()
 {
     int n,sum=0,cost=101;
     cin>>n;
     while(n--)
     {
         int a,p;
         cin>>a>>p;
       if(cost>p)
       {
           cost=p;
       }
       sum+=a*cost;

     }
     cout<<sum<<endl;

 }
