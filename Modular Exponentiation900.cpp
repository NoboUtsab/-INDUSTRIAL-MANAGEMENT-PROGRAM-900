#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    long long int ans=pow(2,n);
    long long int mod=m%ans;
    cout<<mod<<endl;
}
