#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int t;
    cin>>t;
    while(t--)
    {
        long long num;
        cin>>num;

        int count=0;
        if(num==1)
        {
            cout<<0<<endl;
            continue;
        }
        if(num%2==0)
        {
            if(num==2)
            {
                cout<<1<<endl;
            continue;
            }

            cout<<2<<endl;
        }
        else
        {
            if(num==3)
            {
                cout<<2<<endl;
                continue;
            }
        
            else
            {
                cout<<3<<endl;
            }

            
            
            
        }
        
    }

    return 0;
}