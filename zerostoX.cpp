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
        cout<<endl;
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<m;j++)
	        {
	            cout<<int(adj[i][j])<<" ";
	        }
	        cout<<endl;
	    }
	    bool visited[n][m];
	    for(int i=0;i<n;i++)
	    {
	        memset(visited[i],false,sizeof(visited[i]));
	    }
	    vector<vector<pair<int,int> > > zeros;
	    queue<pair<int,int> > que;
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<m;j++)
	        {
	            
                //cout<<"bbbb";
	            if(visited[i][j]==false && adj[i][j]=='O')
	            {
                    vector<pair<int,int> > vec;
                    cout<<"Asdfasdf";
	                que.push(make_pair(i,j));
	                visited[i][j]=true;
	                while(!que.empty())
	                {
	                    pair<int,int> p=que.front();
	                    vec.push_back(p);
	                    int x=p.first;
	                    int y=p.second;
	                    que.pop();
	                    if(x+1<n && visited[x+1][y]==false && adj[x+1][y]=='O')
	                    {
	                        que.push(make_pair(x+1,y));
	                        visited[x+1][y]=true;
	                    }
	                    if(y+1<m && visited[x][y+1]==false && adj[x][y+1]=='O')
	                    {
	                        que.push(make_pair(x,y+1));
	                        visited[x][y+1]=true;
	                    }
	                    if(x-1>=0 && visited[x-1][y]==false && adj[x-1][y]=='O')
	                    {
	                        que.push(make_pair(x-1,y));
	                        visited[x-1][y]=true;
	                    }
	                    if(y-1>=0 && visited[x][y-1]==false && adj[x][y-1]=='O')
	                    {
	                        que.push(make_pair(x,y-1));
	                        visited[x][y-1]=true;
	                    }
	                    
	                }
	                zeros.push_back(vec);
	            }
	        }
	    }
	    cout<<zeros.size();
	    for(int i=0;i<zeros.size();i++)
	    {
	        for(int j=0;j<zeros[i].size();j++)
	        {
	            cout<<zeros[i][j].first<<"*"<<zeros[i][j].second<<" ";
	        }
	        cout<<endl;
	    }
	}
	return 0;
}