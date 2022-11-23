#include<bits/stdc++.h>
using namespace std;
int main()
{
string s, s2;
cin >> s;
int len = s.size();
for(int i=0; i<len; i++)
{
	if(s[i]=='.')
	{
		s2+='0';
	}
	else if(s[i]=='-' && s[i+1]=='.')
	{
		s2+='1';
		i++;
	}
	else if(s[i]=='-' && s[i+1]=='-')
	{
		s2+='2';
		i++;
	}
}
cout << s2 << endl;
return 0;
}
