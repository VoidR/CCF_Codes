#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	scanf("%d",&n);
	int a=n/50,b=(n-a*50)/30,c=(n-a*50-b*30)/10;
	int ans = 7*a+4*b+c;
	printf("%d\n",ans);
	return 0;
}
