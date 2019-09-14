#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,num[1007]={0};
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&num[i]);
	}
	sort(num,num+n);
	int ans=999999;
	for(int i=1;i<n;i++){
		int t=num[i]-num[i-1];
		ans=min(ans,t);
		if(!ans)	break; 
	}
	printf("%d\n",ans);
	return 0;
}
