#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
       int count=0;
        cin>>n;
        while(n!=1)
	{
		if(n%6==0)
        {
            count++;
            n=n/6;

        }

		else if(n%3==0)
        {
            count++;
            n=n*2;

        }

		else
		{
			count=-1;
			break;
		}
	}
	cout<<count<<endl;
    }

}
