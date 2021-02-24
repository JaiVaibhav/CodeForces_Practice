#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long n;
        cin>>n;
        vector<int> arr;
        map<int,int> mp;
        int k=-99999;
        for(int i=0;i<n;i++)
        {
            int num;
            cin>>num;
            if(num!=k)
            {
            if(mp.find(num)==mp.end())
            {
                mp.insert(make_pair(num,1));
                }
            else
            {
                mp[num]++;
            }

            arr.push_back(num);
            k=num;
       //     cout<<num<<" ";
            }
        }

     //   cout<<mp.size()<<" \n";
    int gmin=99999;
    if(mp.size()==1)
    {
        cout<<"0"<<endl;
        continue;
    }
        for(map<int,int>::iterator itr =mp.begin();itr!=mp.end();itr++)
        {
                int num=itr->first;
                int count=itr->second;
         //       cout<<num<<"-"<<count<<"*";
                int min=99999;
                if(arr[0]==num && arr[arr.size()-1]==num)
                {
                        min=count-2+1;
                }
                else if(arr[0]==num )
                {
                    min=count-1+1;
                }
                else if(arr[arr.size()-1]==num)
                {
                    min=count-1+1;
                }
                else
                {
                    min=count+1;
                }

                if(min<gmin)
                {
                    gmin=min;
                }
                
        }

        cout<<gmin<<endl;
    

  }
       return 0;
}