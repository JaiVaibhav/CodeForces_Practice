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
        long arr[n][2];
        for(int i=0;i<n;i++)
        {
            arr[i][0]=0;
            arr[i][1]=0;
        }
        for(long i=0;i<n;i++)
        {
            long num;
            cin>>num;
            arr[num-1][0]++;
            arr[num-1][1]=i;
            
        }
        int f=0;
        for(int i=0;i<n;i++)
        {
           if( arr[i][0]==1)
           {
               cout<<arr[i][1]+1<<endl;
               f=1;
               break;
           }
        }
        if(f==0)
        {
            cout<<"-1"<<endl;
        }
   }
       return 0;
}