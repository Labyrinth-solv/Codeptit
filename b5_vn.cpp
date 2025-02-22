#include <bits/stdc++.h>

using namespace std;

int main()
{
	char a[100];
	for(int i=0; i<5; i++) cin>>a[i];
	if(a[0]-'0'+(a[2]-'0')==a[4]-'0') cout<<"YES";
	else cout<<"NO";
}
