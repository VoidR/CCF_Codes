#include<bits/stdc++.h>
using namespace std;
const int N=10000+7;
int n;
int mat[100][10];//车厢
int num[107];//买票人数 
int main()
{
	cin>>n;
	for(int i=1;i<=20;i++)
	{
		for(int j=0;j<=5;j++)
		{
			if(j==0)	mat[i][j]=5;//每排剩余位置 
			else mat[i][j]=(i-1)*5+j;
		}
	}
	for(int i=0;i<n;i++)
		cin>>num[i];
		
	for(int i=0;i<n;i++)
	{
		int flag=1;//没有找到相邻
		int t=num[i];//这一次买票人数 
		for(int j=1;j<=20;j++)
		{
			if(mat[j][0]>=t)
			{
				flag=0;//找到相邻
				
				mat[j][0]-=t;//剩余位置 
				for(int o=1;o<=5&&t;o++)//标记这些相邻位置 
				{
					if(mat[j][o])
					{
						t--;
						cout<<mat[j][o];
						mat[j][o]=0;
						if(t)	cout<<" ";
						else printf("\n");
					}
				}
			}
		}
		if(flag)
		{
			for(int j=1;j<=20&&t;j++)
				for(int k=0;k<=5&&t;k++)
				{
					if(mat[j][0]==0) break;// 第j排已经没有位置啦
					if(k&&mat[j][k])
					{
						cout<<mat[j][k];//输出购票位置 
						mat[j][k]=0;//标记 
						mat[j][0]--;//该排剩余位置-1 
						t--;
						if(t)	cout<<" ";
						else printf("\n");
					}
				}
		}
	}
	return 0;
}
