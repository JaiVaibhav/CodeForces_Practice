#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void dfs(vector<long> vec[], bool visited[], long u, double &count, double length,double &tlen)
{
    visited[u]=true;
    int flag=0;
    for(long i=0;i<vec[u].size();i++)
    {
        long node=vec[u][i];
        if(visited[node]==false)
        {
            flag=1;
            dfs(vec,visited,node,count,length+1,tlen);
        }
    }
    if(flag==0)
    {
        tlen+=length;
        count++;
    }

}

int main()
{

   long n;
   cin>>n;
   vector<long> vec[n];
   for(int i=0;i<n-1;i++)
   {
    long u,v;
    cin>>u>>v;
    vec[u-1].push_back(v-1);
    vec[v-1].push_back(u-1);
   }
   bool visited[n];
   memset(visited,false,sizeof(visited));  
double count,length,tlen;
count=0;
length=0;
tlen=0;
dfs(vec,visited,0,count,length,tlen);
//cout<<tlen;
    cout<<fixed<<setprecision(15)<<tlen/count;

    return 0;
}