#include<bits/stdc++.h>
using namespace std;
int num[1000007];
int main()
{
	int n,a,b,ans=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d %d",&a,&b);
		for(int j=a;j<b;j++) {num[j]=1;}
	}
	for(int i=0;i<n;i++){
		scanf("%d %d",&a,&b);
		for(int j=a;j<b;j++){
			if(num[j]) ans++;
		}
	}
	printf("%d\n",ans);
	return 0;
}
