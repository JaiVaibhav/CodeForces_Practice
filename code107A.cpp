#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
void dfs(vector<long> vec[], bool visited[], long u)
{
    visited[u]=true;

    for(int i=0;i<vec[u].size();i++)
    {
        long node=vec[u][i];
        if(visited[node]==false)
        {
            dfs(vec,visited,node);
        }
    }
}
int main()
{
    long n,m;
    cin>>n>>m;
    vector<long> vec[n];
    long piped[n];
    memset(piped,-1,sizeof(piped));
    for(long i=0;i<m;i++)
    {
        long u,v,d;
        cin>>u>>v>>d;
        vec[u-1].push_back(v-1);
        piped[u-1]=d;
    }
   
    vector<long> source;
    bool sarr[n];
    memset(sarr,false,sizeof(sarr));
    for(long i=0;i<n;i++)
    {
        for(long j=0;j<vec[i].size();j++)
        {
            if(i!=vec[i][j])
            sarr[vec[i][j]]=true;
        }
    }
    for(long i=0;i<n;i++)
    {
        if(sarr[i]==false && vec[i].size()!=0)
        {
            source.push_back(i);
        }
    }


if(source.size()==0)
{
    cout<<"0";
    return 0;
}
sort(source.begin(),source.end());
    bool visited[n];
    memset(visited,false,sizeof(visited));
    map<long,pair<long,long> >  mp;
    for(long i=0;i<source.size();i++)
    {    memset(visited,false,sizeof(visited));
        if(visited[source[i]]==false)
        {
            long des=0;
            long d=999999;
            
            dfs(vec,visited,source[i]);
            for(long j=0;j<n;j++)
            {
                if(visited[j]==true)
                {
                    if(vec[j].size()==0)
                    {
                       des=j; 
                    }
                    if(d>piped[j] && piped[j]!=-1)
                    {
                        d=piped[j];
                    }
                }
            }
            mp.insert(make_pair(source[i],make_pair(des,d)));
        }
    //    sort(mp.begin(),mp.end());
   
    }

     cout<<mp.size()<<endl;
        for(map <long,pair<long,long> >::iterator p=mp.begin();p!=mp.end();p++)
        {
            cout<<p->first+1<<" "<<mp[p->first].first+1<<" "<<mp[p->first].second<<endl;
        }



    return 0;
}