#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            arr[i]=n-i;
        }
        if(n%2!=0)
        {
            int temp =arr[0];
            arr[0]=arr[n/2];
            arr[n/2]=temp;
        }


        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        
    }
       return 0;
}