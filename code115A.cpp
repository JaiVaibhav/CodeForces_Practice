#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int dfs(vector<int> emp[],bool visited[],int u,int h)
{
    //cout<<h<<"asdf";
    visited[u]=true;
    int max=-1;
    for(int i=0;i<emp[u].size();i++)
    {
        int node=emp[u][i];
        if(visited[node]==false)
        {
            int height=dfs(emp,visited,node,h+1);
            if(height>max)
            {
               // cout<<"max="<<height<<endl;
                max=height;
            }
        }
    }
    //cout<<max<<"asdf";
    if(max<h)
    {
        max=h;
    }
    //cout<<max<<"asdf";
    return max;
}
int main()
{
    int n;
    cin>>n;
    vector<int> emp[n];
    vector<int> mag;
    int x;

    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x==-1)
        {
            mag.push_back(i);
        continue;
        }
        emp[x-1].push_back(i);    
    }
    bool visited[n];
    memset(visited,false,sizeof(visited));
    int max=0;
    for(int i=0;i<mag.size();i++)
    {

        if(emp[mag[i]].size()>0 && visited[mag[i]]==false)
        {
            int height=0;
            height=dfs(emp,visited,mag[i],height);
            
            if(height>max)
            {
                max=height;
            }
        }
    }
cout<<max+1;

}