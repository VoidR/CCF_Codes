#include<bits/stdc++.h>
using namespace std;
const int N=1000+7;
int mat[N][N],m,n;

int main()
{
	cin>>m>>n;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>mat[i][j];
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>mat[j][i];
			if(i==n-1)	cout<<endl;
			else cout<<" ";
		}
	}
	return 0;
}
