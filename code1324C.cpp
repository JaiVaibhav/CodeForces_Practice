#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool reachlast(string s, int d,int curr, int pre, char ch,int arr[])
{
    static int count=0;
    //cout<<"----------"<<++count;
    //cout<<"\n string = "<<s<<" d= "<<d<<" curr="<<curr<<" pre="<<pre<<" pre="<<pre<<" ch="<<ch<<endl;
    bool ret=false;
    if(ch=='L')
    {
        //cout<<"curr="<<curr<<" arr[curr]="<<arr[curr]<<" ";
        if(arr[curr]!=pre)
        {
            arr[curr]=pre;
    for(int i=curr-d;i<curr && ret==false ;i++)
                {
                    if(i==s.length())
                    {
                        return true;
                       }
                    if(i<s.length() && arr[i]==-1)
                    {
                    ret = reachlast(s,d,i,curr,s[i],arr);
                    }
                }     
          }
        }
    else if(ch=='R')
    {
        //cout<<"curr="<<curr<<" arr[curr]="<<arr[curr]<<" ";
        if(arr[curr]!=pre)
        {
            arr[curr]=pre;
            for(int i=curr+d;i>curr && ret==false ;i--)
            {
   //             cout<<"000";
                if(i==s.length())
                {
 //                   cout<<"1111";
                    return true;
                }
                if(i<s.length() && arr[i]==-1)
                {
                 ret = reachlast(s,d,i,curr,s[i],arr);
                }
            }
        }
    }
    return ret;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int d=(find(s.begin(),s.end(),'R')-s.begin())+1;
        int arr[s.length()];
        //d=4;
        memset(arr,-1,sizeof(arr));
       // cout<<d<<endl;
        for(;d<s.length();d++)
        {
         //   cout<<endl;
            memset(arr,-1,sizeof(arr));
            if(reachlast(s,d,d-1,0,s[d-1],arr))
            {
         //       cout<<endl;
                cout<<d;
                break;
                //cout<<"Asdf";
          //      cout<<endl;
                
            }
     //       cout<<"Adddd";
        }
        if(d==s.length() || d==s.length()+1)
    cout<<d;
    cout<<endl;

    }
    return 0;
}