#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    int num;
    cin>>num;
    num--;
    long out = 1+ 4*num*(num+1)/2;
    cout<<out;
    return 0;
}