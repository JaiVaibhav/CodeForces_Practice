#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,l;
    cin>>n>>l;
    
    long long num=0;
    int first=0;
    if(n<=l)
    {
        first=n;
    }
    else
    {
        first=l;
        num=n-l;
    }
long long sum=0;
    sum=num*(num+1)/2+first-1;
    cout<<sum;
    return 0;
}