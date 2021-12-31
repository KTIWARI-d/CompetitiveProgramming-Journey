#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
 
 vector<int> nums={1,4,65,75,57,87,57,12,26,45,75,5,56};
 int k;
 cin>>k;

 priority_queue<int,vector<int>,greater<int>> pq;

 for(int num : nums)
 {
   pq.push(num);
   if(pq.size()>k)
   {
    pq.pop();
   }
 }

 cout<<pq.top();
 
}
