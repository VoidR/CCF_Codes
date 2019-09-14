#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	int num[1007];
	int ans[1007]={0};
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&num[i]);
	}
	for(int i=0;i<n;i++){
		if(i==0)	ans[i]=(num[i]+num[i+1])/2;
		else if(i==n-1)	ans[i]=(num[i]+num[i-1])/2;
		else ans[i]=(num[i-1]+num[i]+num[i+1])/3;
	}
	for(int i=0;i<n;i++){
		printf("%d%c",ans[i],(i==n-1)? '\n':' ');
	}
	return 0;
}
