#include<bits/stdc++.h>
using namespace std;
const int N=1000+7;
int num[N];
int n,t; 
int main()
{
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		cin>>t;
		num[t]++;
	}
	int temp=0;
	int flag=1;
	for(int i=1;i<=1000;i++)
	{
		if(num[i]&&temp*2==n-num[i])
		{
			cout<<i<<endl;
			flag=0;
			break;//i左边的总数是除i以外数的一半 
		} 
		temp+=num[i];
	}
	if(flag)	cout<<-1<<endl;
	return 0;
}
