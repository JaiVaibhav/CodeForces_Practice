#include <iostream>
#include<bits/stdc++.h>
//using namespace std;

int main()
{
    long long x;
    std::cin>>x;
    long long a,b,d;
    a=0;
    b=1;
    while(x--)
    {
        d=a+b;
        a=b;
        b=d;
    }
   std::cout<<d;

       return 0;
}