#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    long long cp=0,cn=0,cz=0;

    long long sum=0;
    for(long long i=0;i<n;i++)
    {
       long long num;
        cin>>num;
        
        if(num>0)
        {
            sum+=num-1;
            cp++;
        }
        else if(num<0)
        {
            sum+=-1-num;
            cn++;
        }
        else
        {
           cz++;
           sum++;
        }
        
    }
    if(cz==0 && cn%2!=0)
    {
        sum+=2;
    }
cout<<sum;
    return 0;
}