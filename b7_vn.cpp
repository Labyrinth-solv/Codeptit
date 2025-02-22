#include <bits/stdc++.h>

using namespace std;

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
