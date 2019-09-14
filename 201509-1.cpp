#include<bits/stdc++.h>
using namespace std;
const int N=10000+7;

int main()
{
	int n,ans=1,num;
	cin>>n;
	cin>>num;//first number 
	for(int i=1;i<n;i++)
	{
		int t;
		cin>>t;
		if(t!=num)	ans++;
		num=t;
	}
	cout<<ans<<endl;
	return 0;
}
