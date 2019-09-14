#include<bits/stdc++.h>
using namespace std;

int child[1007],n,k;

int main()
{
	scanf("%d %d",&n,&k);
	for(int i=1;i<=n;i++)
		child[i]=1;
		
	int t=0,now=0;
	for(int i=1;t!=n-1;i++)
	{
		now++;
		while(!child[now])
		{
			now++;
			if(now>n)	now=1;
		}
		if(i%k==0||i%10==k)
		{
			child[now]=0;
			t++;
		}
	}
	for(int i=1;i<=n;i++)
	{
		if(child[i])	printf("%d\n",i); 
	}
	return 0;
}
