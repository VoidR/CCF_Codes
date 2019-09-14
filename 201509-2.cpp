#include<bits/stdc++.h>
using namespace std;
const int N=10000+7;
int reis(int y)
{
	if((y%4==0&&y%100!=0)||(y%400==0))	return 1;
	else return 0;
}

int main()
{
	int y,sum;
	cin>>y>>sum;
	int is=reis(y);
	int mons[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	for(int i=1;i<=12;i++)
	{
		if(sum<=mons[i])
		{
			printf("%d\n%d\n",i,sum);
			break;
		}
		else
		{
			sum-=mons[i];
			if(i==2)	sum-=is;
		}
	}
	return 0;
}
