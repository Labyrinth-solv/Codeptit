#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	map<int, int> m;
	for(int i=2; i<=sqrt(n); i++)
	{
		while(n%i==0)
		{
			m[i]++;
			n/=i;
		}
	}
	if(n>1)
	{
		m[n]++;
	}
	for(auto x:m)
	{
		cout<<x.first<<" "<<x.second<<" ";
	}
}
