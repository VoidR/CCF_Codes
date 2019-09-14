#include<bits/stdc++.h>
using namespace std;
const int N=100+7;
char str[N];


int main()
{
	scanf("%s",str);
	int len=strlen(str);
	int sum=0,t=0,m=0;
	int flag=0;
	for(int i=0;t<=10&&i<len;i++)
	{
		if('0'<=str[i]&&str[i]<='9'||str[i]=='X')
		{
			t++;
			if(t==10)
			{
				m=sum%11;
				if((m==10&&str[len-1]=='X')||m==str[len-1]-'0')
				{
					flag=1;
					break;
				}
			}
			sum+=(str[i]-'0')*t;
		}
		else continue;
	}
	if(flag)
	{
		printf("Right\n");
	}
	else
	{
		str[len-1]=m+'0';
		if(m==10)	str[len-1]='X';
		printf("%s\n",str);
	}
	return 0;
}
