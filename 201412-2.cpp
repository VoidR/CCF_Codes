#include<bits/stdc++.h>
using namespace std;
const int N = 500+7;
int mat[N][N];
int n;

const int RIGHT = 0;
const int DOWN = 1;
const int LD = 2;
const int RU = 3;
const int ROW = 0;
const int COL = 1;
int dirs[4][2]={{0,1},{1,0},{1,-1},{-1,1}};
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			cin>>mat[i][j];
			
	cout<<mat[1][1]<<" ";	
	int dir=RIGHT;
	int row=1,col=1;
	for(int i=1;i<=n*n-1;i++)
	{
		row+=dirs[dir][ROW],col+=dirs[dir][COL];
		cout<<mat[row][col]<<" ";	
		 
		if(dir==RIGHT&&row==1)
			dir=LD;
		else if(dir==RIGHT&&row==n)
			dir=RU;
		else if(dir==DOWN&&col==1)
			dir=RU;
		else if(dir==DOWN&&col==n)
			dir=LD;
		else if(dir==LD&&row==n)//...
			dir=RIGHT;
		else if(dir==LD&&col==1)
			dir=DOWN;
		else if(dir==RU&&col==n)
			dir=DOWN;
		else if(dir==RU&&row==1)//...
			dir=RIGHT;
	}
	return 0;
}
