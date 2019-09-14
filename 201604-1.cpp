#include<bits/stdc++.h>
using namespace std;
const int N=1000+7;
int point[N];
int n;

int main()
{
	int a=0,t=0;
	cin>>n;
	cin>>a;
	for(int i=1;i<n;i++)
	{
		cin>>t;
		point[i]=t-a;
		a=t;
	}
	int ans=0;
	for(int i=2;i<n;i++)
	{
		if(point[i-1]*point[i]<0)	ans++;
	}
	cout<<ans<<endl;
	return 0;
}
