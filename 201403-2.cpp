#include<bits/stdc++.h>
using namespace std;
const int N=3000+7;
int mat[N][N];
int n,m;
struct windows{
	int x1,y1,x2,y2;
	int num;
}win[20];//chuangkou 

void shua(int x1,int y1,int x2,int y2,int num)
{
	for(int i=x1;i<=x2;i++)
	{
		for(int j=y1;j<=y2;j++)
		{
			mat[i][j]=num;
		}
	}
}


int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>win[i].x1>>win[i].y1;
		cin>>win[i].x2>>win[i].y2;
		win[i].num=i;
		shua(win[i].x1,win[i].y1,win[i].x2,win[i].y2,win[i].num);
	}
	
	int x,y;
	for(int i=1;i<=m;i++)
	{
		cin>>x>>y;
		int now=mat[x][y];
		if(now==0)
		{
			cout<<"IGNORED"<<endl;
		}
		else
		{
			cout<<now<<endl;
			shua(win[now].x1,win[now].y1,win[now].x2,win[now].y2,win[now].num);
		}
	}
	return 0;
}
