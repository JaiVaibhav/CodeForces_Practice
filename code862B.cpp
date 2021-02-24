#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void dfs(vector<unsigned long long> adj[], bool visited[], short p[], unsigned long long node)
{
visited[node]=true;
for(unsigned long long i=0;i<adj[node].size();i++)
{
    unsigned long long n=adj[node][i];
    if(visited[n]==false)
    {
        p[n]=!p[node];
        dfs(adj,visited,p,n);
    }
}

}

int main()
{
    unsigned long long n;
    cin>>n;
    vector<unsigned long long> adj[n];
    for(unsigned long long i=0;i<n-1;i++)
    {
        unsigned long long u,v;
        cin>>u>>v;
        adj[u-1].push_back(v-1);
        adj[v-1].push_back(u-1);
    }

    bool visited[n];
    memset(visited,false,sizeof(visited));
    short p[n];
    p[0]=0;
    dfs(adj, visited, p,0);
    unsigned long long count0=0;
    for(unsigned long long i=0;i<n;i++)
    {
        if(p[i]==0)
        {
            count0++;
        }
    }
unsigned long long nedge=0;
    for(unsigned long long i=0;i<n;i++)
    {
        if(p[i]==1)
        {
            nedge+=count0-adj[i].size();
        }
    }

    cout<<nedge;

    return 0;
}