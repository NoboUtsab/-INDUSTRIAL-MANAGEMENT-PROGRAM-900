#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,n,t;
 //   stack<char>n;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
     if(s[i]=='B')
     {
         if(s[i-1]=='U' && s[i-2]=='W' )
         {
          n.pop_back();
         n. pop_back();
         n.push_back(' ');
         }
         else
         {
              n.push_back(s[i]);
         }
     }
     else
     {
         n.push_back(s[i]);
     }
    }

    cout<<n;



}
