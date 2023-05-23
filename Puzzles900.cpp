#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,count=0;
    cin>>n>>m;
    int a[m];
    for(int i=0; i<m; i++)
    {
        cin>>a[i];
    }
    sort(a,a+m);

    int mini=INT_MAX;
    for(int i=0; i<m; i++)
    {
        int A=INT_MIN;
    int B=INT_MAX;
        for(int j=i; j<i+n; j++)
        {

           A=max(A,a[j]);
            B=min(B,a[j]);


        }
        int d=A-B;
            mini=min(mini,d);
    }
    cout<<mini<<endl;
}
