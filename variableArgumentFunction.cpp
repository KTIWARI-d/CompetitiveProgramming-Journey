#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 auto sum()
  {
  	return 0;
  }

  template<typename  t,typename... Args>  //... means its a variable argument function datatype
  auto sum(t a,Args... arg)
  {
  	return a+sum(arg...);
  }

int main() {
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  
 
       cout<<sum(1,2,4,5,7,8)<<endl;
           cout<<sum(1,4);

  
  

}
