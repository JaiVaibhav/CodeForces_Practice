#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef pair<long,pair<int,int> > pp;
int main() {
	int z;
	cin>>z;
    
	while(z--)
	{
    //    q--;
	    int n;
	    cin>>n;
	    long mat[n][n];
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	            cin>>mat[i][j];
	        }
	    }
        for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	            cout<<mat[i][j]<<" ";
	        }
            cout<<endl;
	    }
        
	    bool visited[n][n];
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	            visited[i][j]=false;
	        }
	    }
	    long cost[n][n];
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	            cost[i][j]=999999;
	        }
	    }
	    cost[0][0]=mat[0][0];
	    vector<pair<long,pair<int,int> > > vec;
	    vec.push_back(make_pair(mat[0][0],make_pair(0,0)));
	   // cout<<vec[0].first<<" "<<vec[0].second.first<<" "<<vec[0].second.second<<endl;
	    bool vis[n][n];
	    for(int i=0;i<n;i++)
	    {
	        memset(vis,false,sizeof(vis));
	    }
	    
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	            //pair<long,pair<int,int>> p;
	                long mcost=9999999;
	                int x=-1,y=-1;
	            int k=0;
	            cout<<"\n"<<vec.size()<<"***\n";
	            for(int q=0;q<vec.size();q++)
	            {
                    cout<<q<<"-----"<<vec[q].first<<"---"<<vec[q].second.first<<"---"<<vec[q].second.second<<endl;
	             if(vec[q].first < mcost)
	             {
	                 x= vec[q].second.first;
	                 y= vec[q].second.second;
	                 mcost=vec[q].first;
	                 k=q;
	             }
	            }
	            cout<<k<<" "<<vec[k].first<<" "<<vec[k].second.first<<" "<<vec[k].second.second<<endl;
	            vec.erase(vec.begin()+k);
	            visited[x][y]=true;
	            
	            if(x+1<n  && visited[x+1][y]==false)
	            {
	                if(cost[x][y]+mat[x+1][y] < cost[x+1][y])
	                {
	                    vec.push_back(make_pair(cost[x][y]+mat[x+1][y],make_pair(x+1,y)));
	                    cost[x+1][y]=cost[x][y]+mat[x+1][y];
	                }
	            }
	            if(y+1<n && visited[x][y+1]==false)
	            {
	                if(cost[x][y]+mat[x][y+1] < cost[x][y+1])
	                {
	                    vec.push_back(make_pair(cost[x][y]+mat[x][y+1],make_pair(x,y+1)));
	                    cost[x][y+1]=cost[x][y]+mat[x][y+1];
	                }
	            }
	            if(x-1>=0 && visited[x-1][y]==false)
	            {
	                if(cost[x][y]+mat[x-1][y] < cost[x-1][y])
	                {
	                    vec.push_back(make_pair(cost[x][y]+mat[x-1][y],make_pair(x-1,y)));
	                    cost[x-1][y]=cost[x][y]+mat[x-1][y];
	                }
	            }
	            if(y-1>=0 && visited[x][y-1]==false)
	            {
	                if(cost[x][y]+mat[x][y-1] < cost[x][y-1])
	                {
	                    vec.push_back(make_pair(cost[x][y]+mat[x][y-1],make_pair(x,y-1)));
	                    cost[x][y-1]=cost[x][y]+mat[x][y-1];
	                }
	            }
	        }
	    }
	   for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	            cout<<cost[i][j]<<" ";
	        }
	        cout<<endl;
	    }
        for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	            cout<<visited[i][j]<<" ";
	        }
            cout<<endl;
	    }
	   cout<<cost[n-1][n-1]<<endl;
	}
	return 0;
}