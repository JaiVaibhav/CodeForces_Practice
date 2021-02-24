#include<iostream>
#include<bits/stdc++.h>

using namespace std;

bool dfs(vector<vector<int>  > v1, bool visited[],int s,int d)
{
    if(s==d)
    {
        return true;
    }
    bool ret=false;
    visited[s]=true;
    for(int i=0;i<v1[s].size();i++)
    {
        int num=v1[s][i];
        if(visited[num]==false)
        {
            ret=dfs(v1,visited,num,d);
            if(ret==true)
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    int n,m;
    cin>>n>>m;
    map<long, vector<vector<int> > > mp; 

    for(int i=0;i<m;i++)
    {
        long u,v,c;
        cin>>u>>v>>c;
        if(mp.find(c)==mp.end())
        {
            vector<vector<int > > vec;
            for(int j=0;j<n;j++)
            {
                vector<int> v;
                vec.push_back(v);
            }
            mp.insert(make_pair(c,vec));
        }
        mp[c][u-1].push_back(v-1);
        mp[c][v-1].push_back(u-1);
    }
map<long, vector<vector<int> > > :: iterator p; 

// cout<<endl;
//     for(p=mp.begin();p!=mp.end();p++)
//     {
//         long a=p->first;
//                for(int i=0;i<n;i++)
//         {
//             for(int j=0;j<mp[a][i].size();j++)
//             {
//                 cout<<mp[a][i][j] <<" ";
//             }
//             cout<<endl;
//         }
//         cout<<endl;
//         cout<<endl;
//     }
int q;
cin>>q;
//cout<<q<<"*******";
while(q--)
{
    int s,d;
    cin>>s>>d;
int count=0;
for(p=mp.begin();p!=mp.end();p++)
{
    vector<vector<int> > v1=mp[p->first];
    
    bool visited[n];
    memset(visited,false,sizeof(visited));
    if(dfs(v1,visited,s-1,d-1))
    {
  //      cout<<p->first<<"---"<<endl;
        count++;
    }
}
cout<<count<<endl;
}
    return 0;
}