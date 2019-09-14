#include<bits/stdc++.h>
using namespace std;

int main()
{
	int num=0;
	int score=1;
	int ans=0;
	for(int i=0;i<30;i++)
	{
		scanf("%d",&num);
		if(!num)	break;
		else if(num==1)
		{
			score=1;
		}
		else if(num==2)
		{
			if(score==1)
			{
				score=2;
			}
			else score+=2;
		}
		ans+=score;
	}
	printf("%d\n",ans);
	return 0;
}
