#include<iostream>
#include<unordered_set>

using namespace std;

int main() {
  #ifndef Online_Sublime
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  
  unordered_set<int> s{1,12,2,4,7,11,16};

   int key;
   cin>>key;
   if(s.find(key)!=s.end())
   {
   	 cout<<key<<" Key Found";
   }
   else
   {
   	 cout<<key<<" Not In the Set";
   }
   cout<<endl;
   s.insert(111);
   s.erase(12);
   for(auto x : s)
   {

   	cout<<x<<" ";
   }


}