#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long  n,w;
        cin>>n>>w;
        vector<long long> arr;
        for(long long i=0;i<n;i++)
        {
            long long num;
            cin>>num;
            arr.push_back(num);
        }
      //  sort(arr.begin(),arr.end());
      vector<long long> vec;
        long long weight=0;
        for(long long i=0;i<n && weight<=w;i++ )
        {
            if(weight+arr[i]<=w)
            {
                weight+=arr[i];
                vec.push_back(i+1);
            }
        }

        if(vec.size()!=0 && weight>=w/2 && weight<=w)
        {
            cout<<vec.size()<<endl;
            for(long i=0;i<vec.size();i++)
            {
                cout<<vec[i]<<" ";
            }
        }
        else if(vec.size()==0)
        {
            cout<<"-1";
        }
        else
        {
            cout<<"-1";
        }
        
        cout<<endl;

    }
    return 0;
}