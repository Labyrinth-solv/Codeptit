#include <bits/stdc++.h>

using namespace std;

int us(int a,int b)
{
	if(a<b) swap(a,b);
	while(b!=0)
	{
		int temp=b;
		b=a%b;
		a=temp;
	}
	return a;
}

int main()
{
	int T; cin>>T;
	while(T--)
	{
		int a,b;
		cin>>a>>b;
		cout<<us(a,b)<<" "<<a*b/us(a,b)<<"\n";
	}
}
