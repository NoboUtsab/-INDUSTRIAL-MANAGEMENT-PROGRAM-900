#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,pos,min,count=0;
    cin>>n;
    int a[n],b[n];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(a,a+n);
    min =a[0];
    for(int i=0; i<n; i++)
    {
        if(min==a[i])
        {
            count++;
        }
    }
    if(count==1)
    {
        for(int i=0; i<n; i++)
        {
            if(b[i]==min)
            {
                pos=i+1;
            }
        }
        cout<<pos<<endl;
    }
    else
    {
        cout<<"Still Rozdil"<<endl;
    }
}
