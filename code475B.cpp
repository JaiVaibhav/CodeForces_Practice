#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void dfs(vector<int> adj[], bool visited[],int source)
{
    visited[source]=true;
    for(int i=0;i<adj[source].size();i++)
    {
        int node=adj[source][i];
        if(visited[node]==false)
        {
            dfs(adj,visited,node);
        }
    }
}

int main()
{
    long n,m;
    cin>>n>>m;
    int arr[n][m];
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            arr[i][j]=count++;
        }
    }

    string s1,s2;
    cin>>s1>>s2;
    vector<int> adj[n*m];

    for(int i=0;i<s1.length();i++)
    {
        if(s1[i]=='>')
        {
            for(int j=0;j<m-1;j++)
            {
                adj[arr[i][j]].push_back(arr[i][j+1]);
            }
        }
        else if(s1[i]=='<')
        {
            for(int j=0;j<m-1;j++)
            {
                adj[arr[i][j+1]].push_back(arr[i][j]);
            }
        }
    }

    for(int i=0;i<s2.length();i++)
    {
        if(s2[i]=='v')
        {
            for(int j=0;j<n-1;j++)
            {
                adj[arr[j][i]].push_back(arr[j+1][i]);
            }
        }
        else if(s2[i]=='^')
        {
            for(int j=0;j<n-1;j++)
            {
                adj[arr[j+1][i]].push_back(arr[j][i]);
            }
        }
    }
// for(int i=0;i<n*m;i++)
// {
//     cout<<i<<"-";
//     for(int j=0;j<adj[i].size();j++)
//     {
//         cout<<adj[i][j]<<" ";
//     }
//     cout<<endl;
// }

bool visited[n*m];
memset(visited,false,sizeof(visited));
int flag=0;

dfs(adj,visited,0);
for(int i=0;i<n*m;i++)
{
    if(visited[i]==false)
    {
        flag=1;
        break;
    }
}
memset(visited,false,sizeof(visited));
if(flag==0)
{
dfs(adj,visited,n*m-1);
 for(int i=0;i<n*m;i++)
{
    if(visited[i]==false)
    {
        flag=1;
        break;
    }
}   
}
 if(flag==0)
 {
     cout<<"YES";
 }   
 else
 {
     cout<<"NO";
 }
 
    return 0;

}