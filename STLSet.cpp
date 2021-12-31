#include<bits/stdc++.h>

using namespace std;

int main() {
  #ifndef Online_Sublime
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  
 set<int> s={2,8,4,1,7,0,14};

 for(set<int>::iterator it=s.begin();it!=s.end();it++)
 {
 	cout<<*it<<" ";
 }

}