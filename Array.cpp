#include<bits/stdc++.h>

using namespace std;

class compare
{
public:
	bool operator()(int a,int b)
	{
    return a>b;
	}
};


void updateArray(array<int,6> &arr,int i,int value)
{
	arr[i] = value;

}
void printArray(const array<int,6> &arr,int i)
{
   // if const is used then it's only read only you can't write in this function
	for(i=0;i<arr.size();i++)
	{
		cout<<arr[i]<<" ";
	}
}
void print(const vector<int> &vec)
{
   // if const is used then it's only read only you can't write in this function
	for(int i=0;i<vec.size();i++)
	{
		cout<<vec[i]<<" ";
	}
	cout<<endl;
}

int main() {
  #ifndef Online_Sublime
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  

array<int,6> arr = {1,2,4,65,45,50};
/*vector<int> second(arr.begin(),arr.end());
vector<int> third(second);
print(second);
print(third);
deque<int> dq(arr.begin(),arr.end());

dq.pop_back(); 

dq.push_front(285);
//dq.insert(3,69);

for(int x : dq)
{
	cout<<x<<" ,";
} */
//priority_queue<int> pq; //max heap
priority_queue<int,vector<int>,compare> pq;//mean Heap

for(int x : arr)
{
	pq.push(x);
}
while(!pq.empty())
{
	cout<<pq.top()<<endl;
	pq.pop();
}

return 0;
}