#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,temp=0;
    string s;
    cin>>s;
    for(i=0;s[i]!=0;i++)
    {
        if(s[i]>=33 && s[i]<=126)
       {
            if(s[i]=='H' || s[i]=='Q' || s[i]=='9')
        {

            temp=1;
        }
       }
    }
    if(temp==1)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }


}
