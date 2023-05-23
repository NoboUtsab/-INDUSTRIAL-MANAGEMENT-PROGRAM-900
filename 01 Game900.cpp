#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    string s;
    cin>>t;
    while(t--)
    {
        int zero=0,one=0;
        cin>>s;
       // sort(s.begin(),s.end());
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0')
            {
                zero++;
            }
            else
            {
                one++;
            }
        }
       int m=min(zero,one);
      // int l=m*2;
       if(m%2!=0)
       {
           cout<<"DA"<<endl;
       }
       else
       {
           cout<<"NET"<<endl;
       }

    }
}
