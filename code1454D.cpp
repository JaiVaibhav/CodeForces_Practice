#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long num;
        cin>>num;
        map<long long,long long> mp;
        long long n=num;
        long long max=0;
        long long c=0;
        long long sq=sqrt(num);
        //cout<<sq;
        for(long long i=2;i*i<=num && n>0 ;i++)
        {
            long long count=0;
            // n=num;
            while(n%i==0)
            {
                count++;
                n=n/i;
            }
            if(max<count)
            {
            mp.insert(make_pair(i,count));
            max=count;
            c=i;
            }
        }
        if(max==0)
        {
            cout<<"1\n"<<num<<endl;
            continue;
        }

    long long div=pow(c,max-1);
    cout<<max<<endl;
    for(int i=0;i<max-1;i++)
    {
        cout<<c<<" ";
    }
    cout<<num/div<<endl;
  }
       return 0;
}