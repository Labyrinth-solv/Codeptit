#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	float sum=0;
	for(int i=0; i<=n; i++)
	{
		sum+=(2.0*n+1)/(2.0*n+2);
	}
	cout<<sum;
}
