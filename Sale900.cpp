#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,k,max=0;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<k;i++)
    {
        if(a[i]<0)
        {
            max+=abs(a[i]);
        }

    }
    cout<<max<<endl;
}
