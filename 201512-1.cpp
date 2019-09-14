#include<bits/stdc++.h>
using namespace std;
const int N=1+7;
char str[N];
int main()
{
	cin>>str;
	int ans=0;
	for(int i=0;i<strlen(str);i++)
	{
		ans+=str[i]-'0';
	}
	cout<<ans<<endl;
	return 0;
}
