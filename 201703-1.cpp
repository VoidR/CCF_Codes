#include<bits/stdc++.h>
using namespace std;
const int N=10000+7;

int n,k;
int cake[N];
int main()
{
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		cin>>cake[i];
	}
	int now=0,ans=0;
	for(int i=1;i<=n;i++)
	{
		now+=cake[i];
		if(now>=k)
		{
			now=0;
			ans++;
		}
	}
	if(now)	ans++;
	cout<<ans<<endl;
	return 0;
}
