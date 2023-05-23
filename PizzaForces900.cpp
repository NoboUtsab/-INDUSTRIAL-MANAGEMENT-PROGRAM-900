#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n;
    cin>>t;
    while(t--)
    {      long long int l,lm;
        cin>>n;
        if(n<6)
        {
            cout<<"15"<<endl;
        }
        else
        {
            if(n%6==0)
            {
               l=(n/6)*15;
            }
            else if(n%8==0)
            {
             l=(n/8)*20;
            }
            else if(n%10==0)
            {
              l=(n/10)*25;
            }
            else
            {
         l=n/10*25;
         lm=n%10;
         if(lm<=2)
         {
             l+=5;
         }
         else if(lm<=4)
         {
             l+=10;
         }
        else  if(lm<=6)
         {
             l+=15;
         }
        else if(lm<=8)
         {
             l+=20;
         }
         else
         {
             l+=25;
         }


            }

            cout<<l<<endl;
        }
    }
}
