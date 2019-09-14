#include<bits/stdc++.h>
using namespace std;
const int N=30+7;
int mat[N][N];
int pos[N][N];
int n,m;

void right(int a,int b)
{
	int cout=1;
	for(int i=b+1;i<=m;i++)
	{
		if(mat[a][b]!=mat[a][i])	break;
		else cout++;
	}
	for(int i=0;i<cout&&cout>=3;i++)
	{
		pos[a][i+b]=0;
	}
}

void down(int a,int b)
{
	int cout=1;
	for(int i=a+1;i<=n;i++)
	{
		if(mat[a][b]!=mat[i][b])	break;
		else cout++;
	}
	for(int i=0;i<cout&&cout>=3;i++)
	{
		pos[i+a][b]=0;
	}
}

int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			scanf("%d",&mat[i][j]);
			pos[i][j]=1;
		}
	}
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			right(i,j);
			down(i,j);
		}
	}
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(pos[i][j]==0)	printf("0");
			else printf("%d",mat[i][j]);
			if(j==m)	printf("\n");
			else printf(" ");
		}
	}
	return 0;
}
