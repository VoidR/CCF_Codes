#include<bits/stdc++.h>
using namespace std;

int key[1007],num,n; 
struct teacher{
	int id;
	int time;
	int type;//0»¹1È¡ 
}t[3007];

struct teacher Key(int a,int b,int c)
{
	struct teacher t;
	t.id=a;
	t.time=b;
	t.type=c;
	return t;
}
int serch(int k)
{
	for(int i=1;i<=num;i++)
		if(key[i]==k)
			return i;
	return 0;
}

bool cmp(teacher a, teacher b)
{
	if(a.time==b.time)
	{
		if(a.type==b.type)
		{
			if(a.id!=b.id)	return a.id<b.id;
		}
		else return a.type<b.type;
		if(a.id!=b.id)	return a.id<b.id;
	}
	else return a.time<b.time;
}

void rekey(int id)
{
	for(int i=1;i<=num;i++)
	{
		if(key[i]==0)
		{
			key[i]=id;
			break;
		}
	}
}

int main()
{
	scanf("%d %d",&num,&n);
	for(int i=1;i<=num;i++)	key[i]=i;
	int all=0,a,b,c;
	for(int i=0;i<n;i++)
	{
		scanf("%d %d %d",&a,&b,&c);
		t[all++]=Key(a,b,1);
		t[all++]=Key(a,b+c,0);
	}
	sort(t,t+all,cmp);
//	cout<<all<<endl;
	for(int i=0;i<all;i++)
	{
//		printf("%d %d %d\n",t[i].type,t[i].id,t[i].time);
		if(!t[i].type)
			rekey(t[i].id);
		else 
			key[serch(t[i].id)]=0;
	}
	for(int i=1;i<num;i++)
		printf("%d ",key[i]); 
	printf("%d\n",key[num]); 
	return 0;
}
