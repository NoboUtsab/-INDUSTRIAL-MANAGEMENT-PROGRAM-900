#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,sum=0,count=0,rsum=0;
    cin>>k;
    int a[12];
    for(int i=0;i<12;i++)
    {
        cin>>a[i];
        rsum+=a[i];
    }
    sort(a,a+12);
if(rsum<k)
{
    count=-1;
}
else
{
    for(int i=11;i>=0;i--)
    {
     if(sum>=k)
     {
         break;
     }

     sum+=a[i];
     count++;
    }
}

    cout<<count<<endl;
}
