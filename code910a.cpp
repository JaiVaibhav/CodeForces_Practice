#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{   
        int n,d;
        cin>>n>>d;
        char input;
        string path;
        cin>>path;
        bool visited[n];
        memset(visited,false,sizeof(visited));
        queue<int> que;
        que.push(0);
        int steps=-1;
        int found=0;
        visited[0]=true;
        while(!que.empty() && found==0)
        {
            steps++;
            int qsize=que.size();
            for(int r=0;r<qsize;r++)
            {
            int p=que.front();
            que.pop();
            if(p==n-1)
            {
                found=1;
                break;
            }
            visited[p]=true;
            for(int i=1;i<=d;i++)
            {
                if(i+p < n && path[i+p]=='1' && visited[i+p]==false)
                {
                    visited[i+p]=true;
                    que.push(i+p);
                }
            }
            }
            
        }
        if(found==1)
        {
            cout<<steps;
        }
        else
        {
        cout<<"-1";
        }
        

    return 0;
}