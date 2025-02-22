#include <bits/stdc++.h>

using namespace std;

bool doiXung(int a[], int n)
{
	for(int i=0; i<n/2; i++)
	{
		if(a[i]!=a[n-i-1]) return false;
	}
	return true;
}

int main()
{
	int T; cin>>T;
	while(T--)
	{
		int n; cin>>n;
		int a[1000];
		for(int i=0; i<n; i++) cin>>a[i];
		if(doiXung(a, n)) cout<<"YES";
		else cout<<"NO";
		cout<<"\n";
	}
}
