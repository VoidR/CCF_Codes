#include<bits/stdc++.h>
using namespace std;
const int N=10000+7;

int main()
{
	int n,ans=0,a=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int t=0;
		cin>>t;
		if(i)
			ans=max(ans,abs(a-t));
		a=t;
	}
	cout<<ans<<endl;
	return 0;
}
