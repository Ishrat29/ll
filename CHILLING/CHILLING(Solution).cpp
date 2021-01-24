#include<bits/stdc++.h>
#define ll long long
#define f(i, a) for (int i=0; i<(a); i++)
using namespace std;
int main()
{
    ll n,i,x,y,flag=0;
    cin>>n;
    x=(n/7)*2;
    if((n+1)%7==0) flag=1;
    if(n%7==1)
    {
        if(flag)
        cout<<x+1<<" "<<x+1<<endl;
        else
        cout<<x<<" "<<x+1<<endl;
    }
    else if(n%7>=2)
    {
        if(flag)
        cout<<x+1<<" "<<x+2<<endl;
        else
        cout<<x<<" "<<x+2<<endl;
    }
    else
        cout<<x<<" "<<x<<endl;

   return 0;
}
