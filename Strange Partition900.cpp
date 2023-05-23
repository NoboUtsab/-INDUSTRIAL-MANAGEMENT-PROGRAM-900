#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,x,a,sum=0,max=0,min;
        cin>>n>>x;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
            sum+=a;
            max+=a/x;
            if(a%x!=0)
            {
                max++;
            }
        }
        min=sum/x;
        if(sum%x!=0)
        {
            min++;
        }
        cout<<min<<" "<<max<<endl;
    }
}
