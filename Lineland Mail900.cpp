#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,b;
    cin>>n;
    long long int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
long long int ma;
long long int mi;

for(int i=0;i<n;i++)
{
    ma=max(abs(a[0]-a[i]),abs(a[i]-a[n-1]));
    if(i==0)
    {
        mi=(abs(a[i]-a[i+1]));
    }
    else if(i==n-1)
    {
        mi=abs(a[i]-a[i-1]);
    }
    else
    {
         mi=min(abs(a[i]-a[i-1]),abs(a[i]-a[i+1]));
    }

    cout<<mi<<" "<<ma<<endl;
}

}
