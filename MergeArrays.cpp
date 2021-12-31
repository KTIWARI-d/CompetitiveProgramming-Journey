#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
  std::vector<int> v1={2,4,7,9};
  vector<int> v2={1,3,5,11,13};
  vector<int> v3;
  
  sort(v1.begin(),v1.end());
  sort(v2.begin(),v2.end());
  int n=v1.size();
  int m=v2.size();
  int i=0,j=0,k=0;
  
  while(i<n && j<m)
  {
      if(v1[i]<v2[j])
      {
          v3.push_back(v1[i]);
          i++;
      }
      else
      {
           v3.push_back(v2[j]);
           j++;
      }
  }
  while(i<n)
  {
      v3.push_back(v1[i]);
      i++;
  }
  
  while(j<m)
  {
         v3.push_back(v2[j]);
         j++;
  }
  for(int x=0;x<v3.size();x++)
  {
     
      std::cout << v3[x] << std::endl;
  }
  
  
}
