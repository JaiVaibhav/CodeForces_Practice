#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    map<string,string> mp;
    for(int i=0;i<m;i++)
    {
        string s1,s2;
        cin>>s1>>s2;
        mp.insert(make_pair(s1,s2));
    }
    
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;

        if(s.length() <= mp[s].length())
        {
            cout<<s;
        }
        else
        {
            cout<<mp[s];
        }
        
        if(i!=n-1)
        {
            cout<<" ";
        }

    }



    return 0;
}