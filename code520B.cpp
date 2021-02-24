#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n,m;
    cin>>n>>m;
    if(n==m)
    {
        return 0;
    }
    long size=(n>m)?n:m;
    queue<long> que;
    que.push(n);
    long steps=0;
    bool visited[size*2];
    memset(visited,false,sizeof(visited));
    visited[n]=true;
    while(!que.empty())
    {
        steps++;
        int s=que.size();
        for(int i=0;i<s;i++)
        {

        long num=que.front();
        que.pop();
        if(num==m)
        {
            cout<<steps-1;
            return 0;
        }
        if(num-1>0 && visited[num-1]==false)
        {
            visited[num-1]=true;
            que.push(num-1);
        }
        if(num*2<=n+m && visited[num*2]==false)
        {
            visited[num*2]=true;
            que.push(num*2);
        }
        }
    }


    return 0;
}