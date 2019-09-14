#include<bits/stdc++.h>
using namespace std;
const int N=1000+7;
int n,num[N];
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>num[i];
	}
	sort(num,num+n);
	int ans=0;
	for(int i=1;i<n;i++)
	{
		if(num[i]-num[i-1]==1)	ans++;
	}
	cout<<ans<<endl;
	return 0;
}
