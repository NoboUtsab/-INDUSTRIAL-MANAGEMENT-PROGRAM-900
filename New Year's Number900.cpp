#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n<2020)
        {
            cout<<"No"<<endl;
        }
        else
        {


            int m=n%2020;
            int d=n/2020;
            if(d>=m)
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }

        }

    }

}
