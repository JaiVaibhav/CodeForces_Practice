#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cout<<endl;
    vector<pair<int,int> > vec;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        vec.push_back(make_pair(x,y));
    }
    bool arr[n];
    memset(arr,false,sizeof(arr));
    queue<pair<int,int> > que;
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==false)
        {
            count++;
        que.push(vec[i]);
        arr[i]=true;
        while(!que.empty())
        {
            
            pair<int,int> p=que.front();
            que.pop();
            
            for(int j=i+1;j<n;j++)
            {
                if(arr[j]==false && (vec[j].first==p.first || vec[j].second==p.second))
                {
                    arr[j]=true;
                    que.push(vec[j]);
                }
            }
        }
        }
    }
    cout<<count-1;
    
   return 0;
}