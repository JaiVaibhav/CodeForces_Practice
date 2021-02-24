#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int qx,qy,kx,ky,dx,dy;
    cin>>qx>>qy>>kx>>ky>>dx>>dy;

    if((kx<qx && qx<dx) || (kx>qx && qx>dx) || (ky<qy && qy<dy) || (ky>qy && qy>dy))
    {
        cout<<"NO";
        return 0;
    }
    cout<<"YES";
    return 0;
    

    
}