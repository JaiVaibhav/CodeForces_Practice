#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int q;
	cin>>q;
	while(q--)
	{
	    int n,m;
	    cin>>n>>m;
	    pair<int,int> s,v;
	    int su,sv,du,dv;
	    cin>>su>>sv>>du>>dv;
	    s=make_pair(su,sv);
	    v=make_pair(du,dv);
	    int board[1000][1000];
	    memset(board,0,sizeof(board));
	    queue<pair<int,int> > q;
	    q.push(s);
	   while(!q.empty())
	   {
	       pair<int,int> node=q.front();
	       q.pop();
	       //cout<<node.first+2<<" "<<node.second+1;
	       if(node.first+2 <=n || node.first-2>0)
	       {
	           if(node.first+2 <=n)
	           {
	               if(node.second+1<=m)
	               {
	                   if(board[node.first+2][node.second+1]==0)
	                   {
	                       q.push(make_pair(node.first+2,node.second+1));
	                       board[node.first+2][node.second+1]=board[node.first][node.second]+1;
	                       
	                   }
	               }
	               if(node.second-1>0)
	               {
	                   if(board[node.first+2][node.second-1]==0)
	                   {
	                       q.push(make_pair(node.first+2,node.second-1));
	                       board[node.first+2][node.second-1]=board[node.first][node.second]+1;
	                   
	                   }
	               }
	           }
	           if(node.first-2 >0)
	           {
	               if(node.second+1<=m)
	               {
	                   if(board[node.first-2][node.second+1]==0)
	                   {
	                       q.push(make_pair(node.first-2,node.second+1));
	                       board[node.first-2][node.second+1]=board[node.first][node.second]+1;
	                   }
	               }
	               if(node.second-1>0)
	               {
	                   if(board[node.first-2][node.second-1]==0)
	                   {
	                       q.push(make_pair(node.first-2,node.second-1));
	                       board[node.first-2][node.second-1]=board[node.first][node.second]+1;
	                   }
	               }
	           }
	       }
	       if(node.second+2 <=m || node.second-2>0)
	       {
	           if(node.second+2 <=m)
	           {
	               if(node.first+1<=n)
	               {
	                   if(board[node.first+1][node.second+2]==0)
	                   {
	                       q.push(make_pair(node.first+1,node.second+2));
	                       board[node.first+1][node.second+2]=board[node.first][node.second]+1;
	                   }
	               }
	               if(node.first-1>0)
	               {
	                   if(board[node.first-1][node.second+2]==0)
	                   {
	                       q.push(make_pair(node.first-1,node.second+2));
	                       board[node.first-1][node.second+2]=board[node.first][node.second]+1;
	                   }
	               }
	           }
	           if(node.second-2 >0)
	           {
	               if(node.first+1<=n)
	               {
	                   if(board[node.first+1][node.second-2]==0)
	                   {
	                       q.push(make_pair(node.first+1,node.second-2));
	                       board[node.first+1][node.second-2]=board[node.first][node.second]+1;
	                   }
	               }
	               if(node.first-1>0)
	               {
	                   if(board[node.first-1][node.second-2]==0)
	                   {
	                       q.push(make_pair(node.first-1,node.second-2));
	                       board[node.first-1][node.second-2]=board[node.first][node.second]+1;
	                   }
	               }
	           }
	       }
	       
	    if(board[du][dv]!=0)
	    {
	    	cout<<board[du][dv]<<endl;
	    	break;
	    }  
	    if(q.empty())
	    {
	    	cout<<"-1"<<endl;
	    } 
	   }
	}
	
	return 0;
}