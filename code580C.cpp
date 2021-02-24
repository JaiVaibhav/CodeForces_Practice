#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void dfs(vector<long> tree[], int ncats[],long count, long c, long &rres,long u,bool visited[],long pre)
{
    visited[u]=true;
    if(ncats[u]==1)
    {
        count=count+1;
    }
    else
    {
        count=0;
    }
    if(count>c)
    {
        return;
    }
    if(tree[u].size()==1 && tree[u][0]==pre)
    {
        
        rres++;
    }

    for(long i=0;i<tree[u].size();i++)
    {
        long node=tree[u][i];
        if(visited[node]==false)
        dfs(tree,ncats,count,c,rres,node,visited,u);
    }
}



int main()
{
    long n,c;
    cin>>n>>c;
    int ncats[n];
    for(int i=0;i<n;i++)
    {
        cin>>ncats[i];
    }

    vector<long> tree[n];

    for(long i=0;i<n-1;i++)
    {
        long u,v;
        cin>>u>>v;
        
        tree[u-1].push_back(v-1);
        tree[v-1].push_back(u-1); 
        
    }
    long rres=0;
    bool visited[n];
    memset(visited,false,sizeof(visited));
    dfs(tree,ncats,0,c,rres,0,visited,-1);
    cout<<rres;
    return 0;
}