#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int n,k=0,flag=1,sum=0;

        cin>>n;
        int a[n];
        for(int  i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];

        }
             for(int i=0;i<n;i++)
        {

            sum+=a[i];
            k+=i;
            if(sum<k)
            {
                flag=0;
                break;
            }

        }

       /* for(long long int i=0;i<n-1;i++)
        {
            if(a[i]>i)
            {
            k=a[i]-i;
            a[i+1]+=k;
            a[i]=a[i]-k;
            }

        }
        for(long long int i=1;i<n;i++)
        {
            if(a[i]<=a[i-1])
            {
            flag=33;
            break;
            }

        }*/
        if(flag==0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }

    }
}
