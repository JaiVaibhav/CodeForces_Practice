#include<iostream>
#include<bits/stdc++.h>
using namespace std;

long dfs(vector<long> quest[], vector<long> nodes[], long visited[], long node,long &count,long comp,bool visitedg[])
{
    //cout<<node<<" ";
    count++;
    visited[node]=comp;
    
    for(long i=0;i<nodes[node].size();i++)
    {
        long val=nodes[node][i];
        if(visitedg[val]==false)
        {
        visitedg[val]=true;
        for(long j=0;j<quest[val].size();j++)
        {
            long n=quest[val][j];
            if(visited[n]==false)
            {
                dfs(quest,nodes,visited,n,count,comp,visitedg);
            }

        }
        }
    }
}

int main()
{
    long n,m;
    cin>>n>>m;
    long  siz[n];
    vector<long> nodes[n]; 
    vector<long> quest[m];
    memset(siz,1,sizeof(siz));
    for(long i=0;i<m;i++)
    {
        long s;
        cin>>s;
            for(long j=0;j<s;j++)
        {
            long v;
            cin>>v;
            nodes[v-1].push_back(i);
            quest[i].push_back(v-1);
        }
    }
    long visited[n];
    memset(visited,0,sizeof(visited));
       bool visitedg[m];
    memset(visitedg,false,sizeof(visitedg));
    long comp=0;
    vector<long> num;
    for(long i=0;i<n;i++)
    {
        long count=0;
        
        if(visited[i]==0)
        {
            comp++;
    
            dfs(quest,nodes,visited,i,count,comp,visitedg);
            num.push_back(count);
        }

    }

    for(long i=0;i<n;i++)
    {
        cout<<num[visited[i]-1]<<" ";
    }
    return 0;
}