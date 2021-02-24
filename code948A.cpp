#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<string> vec;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        vec.push_back(s);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<vec[i].length();j++)
        {
            if(vec[i][j]=='S')
            {
               if(i+1<n && vec[i+1][j]=='W')
               {
                   cout<<"NO";
                   return 0;
               }
               if(j+1<m && vec[i][j+1]=='W')
               {
                   cout<<"NO";
                   return 0;
               }
               if(i-1>=0 && vec[i-1][j]=='W')
               {
                   cout<<"NO";
                   return 0;
               }
               if(j-1>=0 && vec[i][j-1]=='W')
               {
                   cout<<"NO";
                   return 0;
               } 
            }
        }
    }
cout<<"YES"<<endl;
for(int i=0;i<n;i++)
    {
        for(int j=0;j<vec[i].length();j++)
        {
            if(vec[i][j]=='W')
            {
               if(i+1<n && vec[i+1][j]=='.')
               {
                   vec[i+1][j]='D';
                   
               }
               if(j+1<m && vec[i][j+1]=='.')
               {
                   vec[i][j+1]='D';
                   
               }
               if(i-1>=0 && vec[i-1][j]=='.')
               {
                   vec[i-1][j]='D';
               }
               if(j-1>=0 && vec[i][j-1]=='.')
               {
                   vec[i][j-1]='D';
               } 
            }
        }
    }
for(int i=0;i<n;i++)
    {
        cout<<vec[i]<<endl;

    }






//     vector<int> emp[n];
//     vector<int> mag;
//     int x;

//     for(int i=0;i<n;i++)
//     {
//         cin>>x;
//         if(x==-1)
//         {
//             mag.push_back(i);
//         continue;
//         }
//         emp[x-1].push_back(i);    
//     }
//     bool visited[n];
//     memset(visited,false,sizeof(visited));
//     int max=0;
//     for(int i=0;i<mag.size();i++)
//     {

//         if(emp[mag[i]].size()>0 && visited[mag[i]]==false)
//         {
//             int height=0;
//             height=dfs(emp,visited,mag[i],height);
            
//             if(height>max)
//             {
//                 max=height;
//             }
//         }
//     }
// cout<<max+1;

}