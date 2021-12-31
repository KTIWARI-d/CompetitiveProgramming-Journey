#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  //sorted array
 int arr[6] = {10,20,40,40,40,50};

int n= sizeof(arr)/sizeof(arr[0]);
 int key;
 cin>>key;

 auto it = find(arr,arr+n,key);
 auto index= it-arr;

 if(index==n)
 {
 	cout<<key<<" Not Found";
 }
 else
 {
 	cout<<key<<" Found at Index"<<index;
 }
  
  auto lb = lower_bound(arr,arr+n,key);

  auto ub = upper_bound(arr,arr+n,key);

  auto total = ub-lb;

  cout<<endl<<key<<" Occurs "<<total<<" times.";
  


}
