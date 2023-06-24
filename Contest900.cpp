
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,v,m;
    cin>>a>>b>>c>>d;
    v=max((3*a)/10,a-((a/250)*c));
    m=max((3*b)/10,b-((b/250)*d));
    if(v<m)
    {
        cout<<"Vasya"<<endl;
    }
    else if(v>m)
    {
        cout<<"Misha"<<endl;
    }
    else
    {
         cout<<"Tie"<<endl;
    }
}
