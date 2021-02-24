#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int u=0,l=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            l++;
        }
        else
        {
            u++;
        }
    }

    if(u>l)
    {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        cout<<s;
    }
    else
       
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout<<s;
    }
    return 0;
}