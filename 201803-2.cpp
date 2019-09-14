#include<bits/stdc++.h>
using namespace std;
int n,l,t;
int pos[107]={0};
int ori[107]={0};
int bucket[1007]={0};
stack<int>knock;

void Move()
{
	for(int i=0;i<n;i++){
		bucket[pos[i]]--; 
		pos[i]+=ori[i];//一秒后的位置
		if(pos[i]<=0||pos[i]>=l){
			ori[i]*=-1;
		}
		bucket[pos[i]]++;
	}
}

void  Knock()
{
	for(int i=0;i<=l;i++){
		if(bucket[i]>1)
			knock.push(i);
	}
	
	while(!knock.empty()){
		int t=knock.top();
		knock.pop();
		for(int i=0;i<n;i++){
			if(pos[i]==t){
				ori[i]*=-1;
			}
		}
	}
}

int main()
{

	scanf("%d %d %d",&n,&l,&t);
	for(int i=0;i<n;i++){
		ori[i]=1;
		scanf("%d",&pos[i]);
		bucket[pos[i]]=1;
	}
	
	for(int i=0;i<t;i++){
		Move();
		Knock();
	}
	
	for(int i=0;i<n;i++){
		printf("%d%c",pos[i],(i==n-1)? '\n':' '); 
	}
	return 0;
}
