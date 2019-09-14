#include<bits/stdc++.h>
using namespace std;
const int N=10000+7;
int n,k;
int q[N];

int serch(int k)
{
	for(int i=1;i<=n;i++)
		if(q[i]==k)
			return i;
	return 0;
}

void fun_l(int t,int b)
{
	for(int i=0;i>b;i--)
	{
		q[serch(--t)]++;	
	}
}
void fun_r(int t,int b)
{
	for(int i=0;i<b;i++)
	{
		q[serch(++t)]--;	
	}
}
int main()
{
	int a,b;
	cin>>n>>k;
	for(int i=1;i<=n;i++)	q[i]=i;
	for(int i=0;i<k;i++)
	{
		cin>>a>>b;
		int t=q[a];
		
		if(b>0)	fun_r(t,b);
		else fun_l(t,b);
		q[a]+=b;
	}
	for(int i=1;i<n;i++)
	{
		printf("%d ",serch(i));
	}
	printf("%d\n",serch(n));
	return 0;
}
