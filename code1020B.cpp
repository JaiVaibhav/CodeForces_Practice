#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int dfs(int arr[],bool visited[],int i)
{
    if(visited[i]==true)
    {
        return i+1;
    }
    visited[i]=true;
   
    return dfs(arr,visited,arr[i]-1);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bool visited[n];
    for(int i=0;i<n;i++)
    {
        memset(visited,false,sizeof(visited));
        cout<<dfs(arr,visited,i)<<" ";
    }
    
    

    return 0;
}