#include<bits/stdc++.h>
using namespace std;
const int N=1000+7;
int num[N];
int n;

int main()
{
	cin>>n;
	int ans=0;
	for(int i=0;i<n;i++)
	{
		int t;
		cin>>t;
		num[abs(t)]++;
		if(num[abs(t)]==2)	ans++;
	}
	cout<<ans<<endl;
	return 0;
}
