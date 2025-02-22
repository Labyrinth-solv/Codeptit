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
		string s;
		getline(cin>>ws, s);
		stringstream ss(s);
		string word;
		string res="";
		while(ss>>word)
		{
			word[0]=toupper(word[0]);
			for(int i=1; i<word.size(); i++) word[i]=tolower(word[i]);
			res+=word+" ";
		}
		cout<<res<<"\n";
	}
}
