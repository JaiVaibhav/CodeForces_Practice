#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    arr[1]=0;
    for(int i=2;i<n+1;i++)
    {
        cin>>arr[i];
    }
    int go=n;
    stack<int> st;
    while(go)
    {
        st.push(go);
        go=arr[go];
    }

    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
}