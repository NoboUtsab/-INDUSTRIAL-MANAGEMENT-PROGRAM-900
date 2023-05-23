#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    vector<int>a;
    for(int i=0;i<n;i++)
    {
        cin>>m;
        a.push_back(m);
    }
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
