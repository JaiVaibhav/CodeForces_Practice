#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int last=-1;
void dfs(vector<long> node[],bool visited[],long u,vector<int> &nvec)
{
  //  cout<<"** "<<u+1<<" **";
    visited[u]=true;
    nvec.push_back(u);
    for(long i=0;i<node[u].size();i++)
    {
        long num=node[u][i]; 
        if(visited[num]==false)
        {
         dfs(node,visited,num,nvec);
        }
    }
    //cout<<"???"<<(last)+1;
    
    
}
int main()
{
    long n,m;
    cin>>n>>m;
    vector<long> node[n];
    for(long i=0;i<m;i++)
    {
        long u,v;
        cin>>u>>v;
        node[u-1].push_back(v-1);
        node[v-1].push_back(u-1);
    }

    bool visited[n];
    
long count=0;
//vector<int> nvec;

memset(visited,false,sizeof(visited));
    for(long i=0;i<n;i++)
    {
        
        if(visited[i]==false)
        {
          //  cout<<endl
      //    cout<<"\n***"<<i+1;;           
           last=-1; 
           vector<int> nvec;       
            dfs(node,visited,i,nvec);
            
          //      cout<<last;
        //        cout<<"--"<<i+1<<" "<<node[last][1]+1<<" "<<node[last][0]+1<<" ";
                int j;
//cout<<nvec.size()<<"asdfadsf";
                for(j=0;j<nvec.size();j++)
                {
  //              cout<<"sd";
                if(node[nvec[j]].size()==2)
                {
                    continue;
                }
                else
                {
                    break;
                }
                }

                    if(j==nvec.size())
                    {
                        count++;
                    }


        }
    }

cout<<count;

}