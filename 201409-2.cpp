#include<bits/stdc++.h>
using namespace std;
const int N=100+7;
int mat[N][N];

void shua(int x1,int y1,int x2,int y2)
{
	for(int i=x1;i<=x2;i++)
	{
		for(int j=y1;j<=y2;j++)
		{
			mat[i][j]++;
		}
	}
}


int main()
{
	int n,x1,y1,x2,y2;
	cin>>n;
	for(int i=0;i<=100;i++)
	{
		for(int j=0;j<=100;j++)
		{
			mat[i][j]=0;
		}
	}
	
	for(int i=1;i<=n;i++)
	{
		cin>>x1>>y1>>x2>>y2;
		shua(x1,y1,x2-1,y2-1);
	}
	
	int ans=0;
	for(int i=0;i<=100;i++)
	{
		for(int j=0;j<=100;j++)
		{
			if(mat[i][j]!=0)	ans++;
		}
	}
	cout<<ans<<endl;
	return 0;
}
