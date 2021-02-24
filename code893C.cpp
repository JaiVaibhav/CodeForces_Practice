#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{   
    unsigned long long n,m;
    cin>>n>>m;
    unsigned long long arr[n];
    for(unsigned long long i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<unsigned long long> adj[n];

    for(unsigned long long i=0;i<m;i++)
    {
        unsigned long long u,v;
        cin>>u>>v;
        adj[u-1].push_back(v-1);
        adj[v-1].push_back(u-1);
    }

    queue<unsigned long long> que;
    bool visited[n];
    memset(visited,false,sizeof(visited));

    unsigned long long totalcost=0;
    for(unsigned long long i=0;i<n;i++)
    {
        if(visited[i]==false)
        {
            que.push(i);
            unsigned long long min=arr[i];
            while(!que.empty())
            {
                unsigned long long node=que.front();
                que.pop();
                if(min>arr[node])
                {
                    min=arr[node];
                }
                for(unsigned long long j=0;j<adj[node].size();j++)
                {
                    unsigned long long n=adj[node][j];
                    if(visited[n]==false)
                    {
                        que.push(n);
                        visited[n]=true;
                    }
                }
            }
        totalcost+=min;
        }
        
    }

cout<<totalcost;

    return 0;
}