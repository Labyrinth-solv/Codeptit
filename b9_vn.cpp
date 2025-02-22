#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s; cin>>s;
	int cnt=0;
	for(int i=0; i<s.size(); i+=2)
	{
		if(s[i]!=s[i+1]) cnt++; 
	}
	cout<<cnt*(cnt-1)/2;
}
