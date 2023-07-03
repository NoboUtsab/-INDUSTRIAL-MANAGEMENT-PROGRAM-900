#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,even=0,odd=0,sum=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
        if(a[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    if(sum%2!=0 && odd==n)
    {
        cout<<n<<endl;
    }
    else if(sum%2==0 && odd==n)
    {
        cout<<"0"<<endl;
    }
    else
    {
           if(sum%2!=0)
    {
        cout<<odd<<endl;
    }
    else if(sum%2==0)
    {
        cout<<abs(n-odd)<<endl;
    }
    }



}
