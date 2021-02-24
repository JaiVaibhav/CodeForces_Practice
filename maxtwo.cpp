#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int rerem(string &s)
{
	char temp;
	int l=s.length();
	for(int i=0;i+1<l;)
	{
		int k=-1;
		
		if(s[i]==s[i+1])
		{
			temp=s[i];
			for(int j=0;j<l;j++)
				{
					if(s[j]!=temp)
					{
						
					s[++k]=s[j];
					}
				}
				l=k+1	;
				i=0;
		}
		else
		{
			i++;
		}
	}
	return l;
}
int main()
{
	string s;
	cin>>s;
	
	int j=-1;
	int l;
	do{
	l=rerem(s);
	string st;
	st[++j]=s[0];	
	for(int i=0;i<l;i++)
	{
		for(int k=0;k<=j;k++)
		{
			if(st[k]==s[i])
			{
				goto a;
			}
		}
		st[++j]=s[i];
		a: cout<<"";
	}
	/*for(int i=0;i<=j;i++)
	{
		cout<<st[i];
	}
	cout<<endl;
for(int i=0;i<l;i++)
{
	cout<<s[i];
}*/
//cout<<endl;

int count=1;
int min=9999;
char temp;
	for(int m=0;m<=j;m++)
	{
				
		cout<<m;
		for(int i=1;i<l;i++)
		{
			if(s[i]==st[m])
				{
					//cout<<st[m];
				count++;
				if(s[i-1]==s[i+1])
					{
					goto b;
					}
			}
		}
		//cout<<endl<<count;
		if(min>count)
			{
			min=count;
			temp=st[m];
			//cout<<temp;
			}
			count=0;
		b:cout<<"";	
	}
	//cout<<temp<<count<<endl;;
	int z=-1;
	for(int i=0;i<l;i++)
	{
		if(s[i]!=temp)
		{
			s[++z]=s[i];
		}
	}
	l=z+1;
}while(j>2);

if(l==0)
{
	cout<<'0';
}
else
for(int i=0;i<l;i++)
	cout<<s[i];


	return 0;
}