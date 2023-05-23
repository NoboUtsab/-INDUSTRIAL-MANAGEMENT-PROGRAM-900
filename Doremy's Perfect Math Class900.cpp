#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
       int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];

        }
        int g=a[0];
        for(int i=1;i<n;i++)
        {
            g=__gcd(a[i],g);
        }
        cout<<a[n-1]/g<<endl;

}
}
