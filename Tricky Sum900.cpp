#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n ,sum;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long int s=1;

    sum=n*(n+1)/2;
    while(s<=n)
    {
        sum-=s*2;
        s*=2;
    }
        cout<<sum<<endl;
    }
}
