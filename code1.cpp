#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int q;
	cin>>q;
	while(q--)
	{
	    int n,m;
	    cin>>n>>m;
	    int mat[n+1][m+1];
        int visited[n+1][m+1];
        for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<m;j++)
	        {
	            cin>>[i][j];
	        }
	    }
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<m;j++)
	        {
	            visited[i][j]=0;
	        }
	    }
        queue<pair<int,int> > q;
        int max=-9999;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(visited[i][j]!=0)
                {
                    continue;
                }
                int count=0;

                  pair<int,int> s=make_pair(i,j);
                    q.push(s);
                    while(q.empty())
                    {
                        pair<int,int> now=q.front();
                        q.pop();
                        count++;
                        if(now.second+1<=m)
                        {
                            if(mat[now.first][now.second+1]==1 && visited[now.first][now.second+1]==0)
                            {
                                q.push(make_pair(now.first,now.second+1));
                                visited[now.first][now.second+1]=1;
                                
                            }
                        }
                        if(now.first+1<=n)
                        {
                            if(mat[now.first+1][now.second]==1 && visited[now.first+1][now.second]==0)
                            {
                                q.push(make_pair(now.first+1,now.second));
                                visited[now.first][now.second+1]=1;
                                
                            }
                        }
                        if(now.second-1>=0)
                        {
                            if(mat[now.first][now.second-1]==1 && visited[now.first][now.second-1]==0)
                            {
                                q.push(make_pair(now.first,now.second-1));
                                visited[now.first][now.second-1]=1;
                                
                            }
                        }
                        if(now.first+1<=n && now.second+1<=m)
                        {
                         if(mat[now.first+1][now.second+1]==1 && visited[now.first+1][now.second+1]==0)
                            {
                                q.push(make_pair(now.first+1,now.second+1));
                                visited[now.first+1][now.second+1]=1;
                                
                            }   
                        }
                        if(now.first-1<=n && now.second-1<=m)
                        {
                         if(mat[now.first-1][now.second-1]==1 && visited[now.first-1][now.second-1]==0)
                            {
                                q.push(make_pair(now.first-1,now.second-1));
                                visited[now.first-1][now.second-1]=1;
                                
                            }   
                        }
                    }
                    if(count>max)
                    {
                        max=count;
                    }
            }
        }
        if(max>0)
        cout<<max<<endl;
        else
        {
            cout<<0<<endl;
        }
        
      
	}
	
	return 0;
}