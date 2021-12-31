#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
   string s;
    cin>>s;
    int flag=0;
    unordered_map<char,int> countS;

    for(int i=0;i<s.size();i++)
    {
    	countS[s[i]]++;
    }
    for(int i=0;i<s.size();i++)
    {
    	if(countS[s[i]==1])
    	{

    		cout<<i;
    		flag=1;
    	}
    	
    }

    if(flag==0)
    {
    	  cout<<"-1";
    }
  
return 0;
  
}
