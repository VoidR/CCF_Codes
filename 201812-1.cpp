#include<bits/stdc++.h>
using namespace std;
const int N=10000+7;
int r,y,g,n,k,t;
int main()
{
	cin>>r>>y>>g;
	cin>>n;
	int ans=0;
	for(int i=0;i<n;i++)
	{
		cin>>k>>t;
		if(k<=1)	ans+=t;
		else if(k==2) ans+=t+r;
	}
	cout<<ans<<endl;
	return 0;
}
