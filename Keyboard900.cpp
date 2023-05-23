#include<bits/stdc++.h>
using namespace std;
int main()
{
    string c,s,l,r,n;
    char le;
    s="qwertyuiopasdfghjkl;zxcvbnm,./";
    r="pqwertyuio;asdfghjkl/zxcvbnm,.";
    l="wertyuiopqsdfghjkl;axcvbnm,./z";
    cin>>le>>c;

    if(le=='R')
    {
        int j=0;
        for(int i=0; i<c.size();)
        {
          if(c[i]==s[j])
          {
              n.push_back(r[j]);
              j=0;
              i++;
          }
          else
          {
              j++;
          }
        }
    }
    else if(le=='L')
    {
          int j=0;
        for(int i=0; i<c.size();)
        {
          if(c[i]==s[j])
          {
              n.push_back(l[j]);
              j=0;
              i++;
          }
          else
          {
              j++;
          }
        }
    }


    cout<<n;
}
