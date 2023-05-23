#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int count=0;

    int a=n*m;
    if(n==1 ||m==1)
    {
        cout<<"Akshat"<<endl;

    }
    else
    {
        while(1)
        {
            if(n==0 || m==0)
            {
                break;
            }

            n=n-1;
            m=m-1;
            count++;

        }
        if(count%2==0)
        {
            cout<<"Malvika"<<endl;
        }
        else
        {
            cout<<"Akshat"<<endl;
        }
    }


}//
//
