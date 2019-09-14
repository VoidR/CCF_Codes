#include<bits/stdc++.h>
using namespace std;
char str[20];
stack<int> num;
int main()
{
	int n=0;
	int flag=0;
	int ans=0;
	scanf("%d",&n);
	getchar();
	for(int a=0;a<n;a++){
		for(int i=0;i<7;i++){
			scanf("%c",&str[i]); 
		}
		getchar();
		for(int i=0;i<7;i++){
			if(str[i]=='+'){	
			} else if(str[i]=='-'){
				num.push(-(str[++i]-'0'));
			} else if(str[i]=='x'){
				int t = num.top();
				num.pop();
				num.push(t*(str[++i]-'0'));
			} else if(str[i]=='/'){
				int t = num.top();
				num.pop();
				num.push(t/(str[++i]-'0'));
			}else if(str[i]>'0' && str[i]<='9'){
				num.push(str[i]-'0');
			}
		}
		ans=num.top();
		num.pop();
		while(!num.empty()){
			int t = num.top();
			num.pop();
			ans+=t;
		}
//		cout<<ans<<endl;
		if(ans==24)	printf("Yes\n");
		else printf("No\n");
	}
	return 0;
}

