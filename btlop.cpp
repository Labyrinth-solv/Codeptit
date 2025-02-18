#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int sum=0;
	for(int i=0; i<=n; i++)
	{
		sum+=pow(-1, i+1)*i;
	}
	cout<<sum;
}
