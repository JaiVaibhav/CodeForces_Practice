#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    string s;

    s="hello";
   int j=0;
   int i=0;
     for(i=0,j=0;i<str.length() && j<s.length();i++)
    {
        //cout<<str[i];
        //cout<<s[j];
        if(str[i]==s[j])
        {
           // cout<<"asdf";
            j=j+1;
        }        

    }
    //cout<<j;
    if(j==s.length())
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}