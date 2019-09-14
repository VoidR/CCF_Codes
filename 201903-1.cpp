#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,num[100007],mid;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&num[i]);
	sort(num,num+n,greater<int>());
	if(n%2){
		mid=num[n/2]*2;
	} else {
		mid=(num[n/2]+num[n/2-1]);
	}
	if(mid%2){
		printf("%d %.1f %d\n",num[0],mid/2+0.5,num[n-1]);
	} else {
		printf("%d %d %d\n",num[0],mid/2,num[n-1]);
	}
	return 0;
}
