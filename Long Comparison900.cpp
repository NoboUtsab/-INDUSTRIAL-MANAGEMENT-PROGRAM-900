#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    int t;
    long long int x1,p1,x2,p2,s1=0,s2=0;
    cin>>t;
    while(t--)
    {

        cin>>x1>>p1>>x2>>p2;
        int pn=min(p1,p2);
        p1-=pn;
        p2-=pn;
        if(p1>=7)
        {
           cout<<">"<<endl;
        }
        else if(p2>=7)
        {
            cout<<"<"<<endl;
        }
        else{
            for(long long int i=1;i<=p1;i++)
        {
            x1*=10;
        }
         for(long long int i=1;i<=p2;i++)
        {
            x2*=10;
        }
        if(x1>x2)
        {
            cout<<">"<<endl;

        }
        else if(x1<x2)
        {
            cout<<"<"<<endl;

        }
        else if(x1==x2)
        {
            cout<<"="<<endl;

        }

        }


    }
}
