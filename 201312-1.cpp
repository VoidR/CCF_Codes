#include<bits/stdc++.h>
using namespace std;
const int N=10000+7;
int n,num[N],Max=-1;

int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int t;
		cin>>t;
		num[t]++;
		Max=max(Max,num[t]);
	}
	for(int i=1;i<=10000;i++)
	{
		if(num[i]==Max)
		{
			cout<<i<<endl;
			break;
		}
	}
	return 0;
}
