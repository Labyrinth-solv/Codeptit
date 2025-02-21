#include <bits/stdc++.h>

using namespace std;

int main()
{
	int T; cin>>T;
	while(T--)
	{
		string s;
		cin>>s;
		if(s[0]==s[s.size()-1]) cout<<"YES";
		else cout<<"NO";
		cout<<"\n";
	}
}
