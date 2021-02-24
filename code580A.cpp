#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long num;
    cin>>num;
    long curr,pre;
    cin>>curr;
    long fmax=-1;
    long count=1;
    if(num==1)
    {
        cout<<1;
        return 0;
    }
    for(long i=0;i<num-1;i++)
    {
        pre=curr;
        cin>>curr;
        
        if(curr>=pre)
        {
            count++;
        }
        else
        {
            if(fmax<count)
            {
                fmax=count;
                
            }
            count=1;
        }
        

    }

if(fmax<count)
            {
                fmax=count;
                count=0;
            }

cout<<fmax;

    return 0;
}