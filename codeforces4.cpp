#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string go(string &s1,string &s2,int i, int j, int c)
{
    if(j==s2.length() && c<s2.length())
    {
        return("Yes");
    }
    if(i>s1.length())
    {
        return("No");
    }
   
    

    if(c==s2.length())
    {
        j=j-1;
        c=0;
    }

    if(s1[i]==s2[j])
    {
        return go(s1,s2,i+1,j+1,c+1);
    }
    else{
        return go(s1,s2,i+1,j,0);
    }
    
    
}
int main()
{   
    int t;
    cin>>t;
    while(t--)
    {
         int n,m;
         cin>>n>>m;
         string s1;
         cin>>s1;

         while(m--)
         {
         int l,h;       
         cin>>l>>h;
         string s2=s1.substr(l-1,h-l+1);
         int flag=0;
         for(int i=0;i<n;i++)
         {
             if(go(s1,s2,i,0,0)=="Yes")
             {
                 cout<<"YES";
                 flag=1;
           break;
             }
         }
         if(flag==0)
{
    cout<<"NO";
}
cout<<endl;
         }
    }

    return 0;
}