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
		string first;
		string word;
		string res="";
		ss>>first;
		for(int i=0; i<first.size(); i++)
		{
			first[i]=toupper(first[i]);
		}
		while(ss>>word)
		{
			word[0]=toupper(word[0]);
			for(int i=1; i<word.size(); i++) word[i]=tolower(word[i]);
			res+=word+" ";
		}
		res[res.size()-1]='\0';
		res+=", "+first;
		cout<<res<<"\n";
	}
}
