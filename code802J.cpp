#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long dfs(vector<long> adj[], bool visited[],long u, long v,long n, long arr[][100])
{
    visited[u]=true;
    long cost=0;
    for(long i=0;i<adj[u].size();i++)
    {
        long node=adj[u][i];
        if(visited[node]==false)
        {
            long val=dfs(adj,visited,node,u,arr[u][node],arr);
            if(val>cost)
            {
                cost=val;
            }
        }
    }
    return cost+arr[u][v];
}
int main()
{
    long n;
    cin>>n;
    long arr[100][100];
    for(long i=0;i<100;i++)
    {
        memset(arr[i],0,sizeof(arr[i]));
    }
vector<long> adj[n];
    for(long i=0;i<n-1;i++)
    {
        long u,v,c;
        cin>>u>>v>>c;
        
        adj[u].push_back(v);
        adj[v].push_back(u);
        arr[u][v]=c;
        arr[v][u]=c;
    }


long max=-99999;
bool visited[n];
memset(visited,false,sizeof(visited));
visited[0]=true;
    for(long i=0;i<adj[0].size();i++)
    {
        long val=dfs(adj,visited,adj[0][i],0,0,arr);
        if(val>max)
        {
            max=val;
        }
    }

    cout<<max;
    return 0;
}