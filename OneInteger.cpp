//convert a set of integer into a single integer into minimal cost

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  
  vector<int> nums = {1,2,4,5,7,8,2};
  priority_queue<int,vector<int>,greater<int>> pq;

  for(int num : nums)
  {
  	pq.push(num);
  }
  int ans=0,sum=0,a,b;
  while(pq.size()>1)
  {
  	a=pq.top();
  	pq.pop();
  	b=pq.top();
  	pq.pop();
  	sum=a+b;
  	ans+=sum;
  	pq.push(sum);
  }

  cout<<pq.top()<<" "<<ans;
  
  

}
