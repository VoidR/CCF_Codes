#include<bits/stdc++.h>
using namespace std;
const int N=10000+7;
int n,num[N],ans[N];

int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>num[i];
	}
	for(int i=0;i<n;i++)
	{
		cout<<++ans[num[i]];
		if(i==n-1)	cout<<endl;
		else cout<<" ";
	}
	
	return 0;
}
