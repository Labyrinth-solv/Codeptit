#include <bits/stdc++.h>

using namespace std;

bool kt(string s, int check)
{
	for(int i=0; i<s.size()-1; i++)
	{
		if(check==2&&s[i]<s[i+1]) return false;
		else if(check==1&&s[i]>s[i+1]) return false; 
	}
	return true;
}

int main()
{
	int T; cin>>T;
	while(T--)
	{
		int check;
		string s; cin>>s;
		for(int i=0; i<s.size()-1; i++)
		{
			if(s[i]<s[i+1])
			{
				check=1;
				break;
			}
			else if(s[i]>s[i+1]) 
			{
				check=2;
				break;
			}
		}
		if(kt(s, check))
		{
			cout<<"YES";
		}
		else cout<<"NO";
		cout<<"\n";
	}
}
