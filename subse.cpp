#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
string s1="Geeks";
string s2="GeeksforGeeks";

int l1=s1.length();
int l2=s2.length();
int dp[l1+1][l2+1];
for(int i=0;i<=l1;i++)
{
    for(int j=0;j<=l2;j++)
    {



        if(i==0 || j==0)
        {
             cout<<i-1<<" "<<j-1<<endl;
            dp[i][j]=0;
        }
        else if(s1[i]==s2[j])
        {
            cout<<i-1<<"-"<<s1[i-1]<<" "<<j-1<<"-"<<s2[j-1];
            dp[i][j]=1+dp[i-1][j-1];
        }
        else{
            cout<<i-1<<"-"<<s1[i-1]<<" "<<j-1<<"-"<<s2[j-1];
            dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
cout<<endl;
        for(int k=0;k<=l1;k++)
        {
            for(int l=0;l<=l2;l++)
            {
                cout<<dp[k][l]<<" "; 
            }
            cout<<endl;
        }
    }
}


    return 0;
    }