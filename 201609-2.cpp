#include<bits/stdc++.h>
using namespace std;
const int N=10000+7;
int n;
int mat[100][10];//����
int num[107];//��Ʊ���� 
int main()
{
	cin>>n;
	for(int i=1;i<=20;i++)
	{
		for(int j=0;j<=5;j++)
		{
			if(j==0)	mat[i][j]=5;//ÿ��ʣ��λ�� 
			else mat[i][j]=(i-1)*5+j;
		}
	}
	for(int i=0;i<n;i++)
		cin>>num[i];
		
	for(int i=0;i<n;i++)
	{
		int flag=1;//û���ҵ�����
		int t=num[i];//��һ����Ʊ���� 
		for(int j=1;j<=20;j++)
		{
			if(mat[j][0]>=t)
			{
				flag=0;//�ҵ�����
				
				mat[j][0]-=t;//ʣ��λ�� 
				for(int o=1;o<=5&&t;o++)//�����Щ����λ�� 
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
					if(mat[j][0]==0) break;// ��j���Ѿ�û��λ����
					if(k&&mat[j][k])
					{
						cout<<mat[j][k];//�����Ʊλ�� 
						mat[j][k]=0;//��� 
						mat[j][0]--;//����ʣ��λ��-1 
						t--;
						if(t)	cout<<" ";
						else printf("\n");
					}
				}
		}
	}
	return 0;
}
