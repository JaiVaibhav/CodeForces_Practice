#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, pos;
    cin>>n>>pos;
    int arr[n-1];
    for(int i=0;i<n-1;i++)
    {
        cin>>arr[i];
    }
    int j;
    for(j=0;j<n-1;)
    {
        if(j+1==pos)
        {
            cout<<"YES";
            return 0;
        }
        j=j+arr[j];
    }
    if(j+1==pos)
    {
        cout<<"YES";
        return 0;
    }
    cout<<"NO";
    return 0;
}