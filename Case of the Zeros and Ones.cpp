#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l=0,r=0 ;
    cin>>n;
    char c[n];

    for(int i=0;i<n;i++)
    {
        cin>>c[i];
        if(c[i]=='0')
        {
            l++;
        }
        else if(c[i]=='1')
        {
            r++;
        }


    }
    int m=min(l,r);


    cout<<n-m*2<<endl;

}
