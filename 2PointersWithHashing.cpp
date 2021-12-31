#include<iostream>
#include<unordered_set>
#include<vector>

using namespace std;


void pairMatch(std::vector<int> v,int sum)
{
	unordered_set<int> s;

	for(int i=0;i<v.size();i++)
	{
		int k=sum-v[i];
		if(s.find(k)!=s.end())
		{
			cout<<"The Pair is "<<v[i]<<" and "<<k;

		}
		s.insert(v[i]);
	}
}




int main() {
  #ifndef Online_Sublime
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif

 vector<int> v={1,12,15,14,11,10};

 int sum=24;
 pairMatch(v,sum);
  

}