#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int len;
        cin>>len;
        int odd=0,even=0;
        int pos1=-1;
        int pos2=-1;
        int i=0;
        int out=0;
        for(i=0;i<len;i++)
        {
            int num;
            cin>>num;
            if(out==0)
            {
                if(num%2==0)
            {
                    cout<<1<<endl;
                    cout<<i+1<<endl;
                    out=1;
            }
            else
            {
                odd++;
                if(pos1==-1)
                {
                    pos1=i+1;
                }
                else
                {
                 cout<<2<<endl;
                 cout<<pos1<<" "<<i+1<<endl;
                    out=1;
                }
            }

            }            
        }

        if(out==0)
        {
            cout<<-1<<endl;
        }

    }

    return 0;
}