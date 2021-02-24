#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int m=0;
        int count=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='L')
            {
                count++;
            }
            else
            count=0;
                if(m<count)
                {
                    m=count;
                }
                
            
        }
cout<<m+1;
cout<<endl;

    }
    return 0;
}