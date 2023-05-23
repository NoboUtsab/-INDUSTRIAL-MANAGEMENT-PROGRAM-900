#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    bool b=true;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!='1' && s[i]!='4')
        {
            b=false;
        }
        if(s[0]=='4')
        {
            b=false;
        }
        if(s.find("444")!=s.npos)
        {
            b=false;
        }
    }
    if(b==true)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
