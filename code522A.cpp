#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int dfs(map<string,vector<string> > mp,string s,int count)
{
    
    //cout<<s<<" ";
    if(mp.find(s)==mp.end())
    {
    return count;
    }
 vector<string> lstr=mp.at(s);
    int maxcount=count;
   // cout<<lstr.size();
    for(int i=0;i<lstr.size();i++)
    {
//        cout<<lstr[i];
        int newcount=dfs(mp,lstr[i],count+1);
        if(newcount>maxcount)
        {
            maxcount=newcount;
        }
    }
    return maxcount;
} 

 int main()
 {
     int n;
     cin>>n;
     map<string,vector<string> > mp;
     for(int i=0;i<n;i++)
     {
         string s1,s2;
         cin>>s1>>s2>>s2;
         //cout<<s2;
         transform(s1.begin(),s1.end(),s1.begin(),::tolower);
         transform(s2.begin(),s2.end(),s2.begin(),::tolower);
         
        if(mp.find(s2)!=mp.end() )
        {
            mp[s2].push_back(s1);
            //cout<<mp[s2].size();
        }
        else
        {
            vector<string> str;
            str.push_back(s1);
            mp.insert(make_pair(s2,str));
            
        }
        
     }


//map <string,bool> visit;
int count=1;
// cout<<mp.at("polycarp").size();

// for(std::map<string,vector<string> >::iterator it = mp.begin(); it != mp.end(); ++it) {
  
//   std::cout << "Key: " << it->first << std::endl;
//   std::cout << "Value: " << it->second.size() << std::endl;
// }
cout<<dfs(mp,"polycarp",count);
     return 0;
 }