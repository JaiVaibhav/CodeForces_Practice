#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long x,y,a;
    cin>>x>>y>>a;
    if(y>x)
    {
        int temp=y;
        y=x;
        x=temp;
    }

    long long t=y/a;
    t=y%a==0?t:t+1;
    int tt=0;
    if(x>t*a)
    {
    tt= (x-t*a)/a;
    tt=(x-t*a)%a==0?tt:tt+1;
    }
    cout<<t*t+(t*tt);

       return 0;
}