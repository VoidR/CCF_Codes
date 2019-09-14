#include<bits/stdc++.h>
using namespace std;
const int N=1000+7;
int n;

struct numbers{
	int number;
	int t;
}num[N];

bool cmp(numbers a,numbers b)
{
	if(a.t==b.t)	return a.number<b.number;
	else return a.t>b.t;
}
int main()
{
	cin>>n;
	for(int i=1;i<=1000;i++)
	{
		num[i].number=i;
		num[i].t=0;
	}
	for(int i=0;i<n;i++)
	{
		int t;
		cin>>t;
		num[t].t++;
	}
	
	sort(num+1,num+1001,cmp);
	for(int i=1;i<=n;i++)
	{
		if(num[i].t==0)	break;
		printf("%d %d\n",num[i].number,num[i].t);
	}
	return 0;
}
