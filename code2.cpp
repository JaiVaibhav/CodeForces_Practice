#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void dfs(bool visited[],vector<long> adj[], long u)
{
    visited[u]=true;
    for(long i=0;i<adj[u].size();i++)
    {
        long node=adj[u][i];
        if(!visited[node])
        {
            dfs(visited,adj,node);
        }
    }
}
int main()
{
        long n,m;
        cin>>n>>m;
        vector<long> adj[n];
    
        for(long i=0;i<m;i++)
        {
            long u,v;
            cin>>u>>v;
            adj[u-1].push_back(v-1);
            adj[v-1].push_back(u-1);
        }

        bool visited[n];
        memset(visited,false,sizeof(visited));
        long count=0;
        for(long i=0;i<n;i++)
        {
            if(visited[i]==false)
            {
                count++;
                dfs(visited,adj,i);
            }
        }
    cout<<count;
    return 0;
}