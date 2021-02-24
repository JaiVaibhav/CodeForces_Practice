#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> adj[n];

    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u-1].push_back(v-1);
        adj[v-1].push_back(u-1);
    }
int flag=0;
int count=0;
do
{
    
    flag=0;
    vector<pair<int,int> > vec;
    for(int i=0;i<n;i++)
    {
        if(adj[i].size()==1)
        {
            vec.push_back(make_pair(i,adj[i][0]));
            flag=1;
            adj[i].erase(adj[i].begin());
        }
    }
    for(int i=0;i<vec.size();i++)
    {
        int num=vec[i].first;
        int pos=vec[i].second;
        if(find(adj[pos].begin(),adj[pos].end(),num) !=adj[pos].end())
        adj[pos].erase(find(adj[pos].begin(),adj[pos].end(),num));
    }
    


    if(flag==1)
    {
        count++;
    }
   // cout<<endl;
} while (flag==1);

    cout<<count;


    return 0;
}