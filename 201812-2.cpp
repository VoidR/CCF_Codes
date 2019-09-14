#include<bits/stdc++.h>
using namespace std;
const int N=100000+7;
int r,y,g,n,k,t;
int main()
{
	cin>>r>>y>>g;
	cin>>n;
	long long int ans=0;
	for(int i=0;i<n;i++)
	{
		cin>>k>>t;
		//green->yellow->red
		if(k==0)	ans+=t;
		else if(k==1)//red
		{
			int temp=(g+y+r-t+ans)%(r+y+g);
			if(temp<g)	continue;
			else ans+=r+y+g-temp;
		}
		else if(k==2)//yellow
		{
			int temp=(g+y-t+ans)%(r+y+g);
			if(temp<g)	continue;
			else ans+=r+y+g-temp;
		}
		else if(k==3)//green
		{
			int temp=(g-t+ans)%(r+y+g);
			if(temp<g)	continue;
			else ans+=r+y+g-temp;
		}
	}
	cout<<ans<<endl;
	return 0;
}
