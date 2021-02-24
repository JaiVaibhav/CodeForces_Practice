#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int q;
	cin>>q;
	while(q--)
	{
	    int n,m;
	    cin>>n>>m;
	    char adj[n][m];
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<m;j++)
	        {
	            cin>>adj[i][j];
	        }
	    }
	    bool visited[n][m];
	    for(int i=0;i<n;i++)
	    {
	        memset(visited[i],false,sizeof(visited[i]));
	    }
	    int count=0;
	    queue<pair<int,int> > que;
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<m;j++)
	        {
	            if(visited[i][j]==false && adj[i][j]=='X')
	            {
	                count++;
	                que.push(make_pair(i,j));
	                visited[i][j]=true;
	                while(!que.empty())
	                {
	                    pair<int,int> p=que.front();
	                    int x=p.first;
	                    int y=p.second;
	                    que.pop();
	                    if(x+1<n && visited[x+1][y]==false && adj[x+1][y]=='X')
	                    {
	                        visited[x+1][y]=true;
	                        que.push(make_pair(x+1,y));
	                    }
	                    if(y+1<m && visited[x][y+1]==false && adj[x][y+1]=='X')
	                    {
	                        visited[x][y+1]=true;
	                        que.push(make_pair(x,y+1));
	                    }
	                    if(x-1>=0 && visited[x-1][y]==false && adj[x-1][y]=='X')
	                    {
	                        visited[x-1][y]=true;
	                        que.push(make_pair(x-1,y));
	                    }
	                    if(y-1>=0 && visited[x][y-1]==false && adj[x][y-1]=='X')
	                    {
	                        visited[x][y-1]=true;
	                        que.push(make_pair(x,y-1));
	                    }
	                }
	            }
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}