#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long long n;
    cin>>n;
    vector<unsigned long long> adj[n];
    for(unsigned long long i=0;i<n;i++)
    {
        unsigned long long u;
        cin>>u;
        adj[i].push_back(u-1);
        adj[u-1].push_back(i);

    }
    bool visited[n];
    unsigned long long count=0;
    memset(visited,false,sizeof(visited));
    queue<unsigned long long> que;
    for(unsigned long long i=0;i<n;i++)
    {
        if(visited[i]==false)
        {
            count++;
            que.push(i);
            while(!que.empty())
            {
                unsigned long long node=que.front();
                que.pop();
                for(unsigned long long i=0;i<adj[node].size();i++)
                {
                    unsigned long long n=adj[node][i];
                    if(visited[n]==false)
                    {
                        que.push(n);
                        visited[n]=true;
                    }
                }

            }
        }
    }
    cout<<count;



    return 0;
}