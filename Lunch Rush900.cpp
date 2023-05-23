#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int n,k,m;
    cin>>n>>k;
long long int s=INT_MIN;
    while(n--)
    {

      long long  int f,t;
        cin>>f>>t;
        if(t>k)
        {
            m=f-(t-k);
        }
        else
        {
            m=f;
        }
        s=max(m,s);

    }
    cout<<s<<endl;
}
