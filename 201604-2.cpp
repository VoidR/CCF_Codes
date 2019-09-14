// 0! 

#include<bits/stdc++.h>
using namespace std;
const int N=10000+7;
char mat[20][20];
char t[5][5];
int s;
int last=0;
int main()
{
	for(int i=1;i<=15;i++)
		for(int j=1;j<=10;j++)
		{
			scanf("%c",&mat[i][j]);
			getchar();
		}
	for(int j=1;j<=10;j++)
			mat[16][j]='1';
	for(int i=1;i<=4;i++)
		for(int j=1;j<=4;j++)
		{
			scanf("%c",&t[i][j]);
			if(t[i][j]=='1')	last=i;
			getchar();
		}
	cin>>s;
	s--;//align
	int flag=1;
	for(int i=1;i<=16&&flag;i++)
	{
		for(int j=1;j<=last&&flag;j++)
		{
			for(int k=1;k<=4&&flag;k++)
			{
				if(t[j][k]=='1'&&mat[i+j+4-last][s+k]=='1')
				{
					flag=0;
				}
			}
		}
		//add
		if(flag==0)
		{
			for(int j=1;j<=last;j++)
			{
				for(int k=1;k<=4;k++)
				{
					mat[i+j-1+4-last][s+k]+=t[j][k]-'0';
				}
			}
			break;
		}
	}	
	for(int i=1;i<=15;i++)
		for(int j=1;j<=10;j++)
		{
			printf("%c",mat[i][j]);
			if(j==10)	printf("\n");
			else printf(" ");
		}
	return 0;
}
