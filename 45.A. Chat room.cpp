// A. Chat room codeforces soln
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;

	cin >> s;

	string temp = "hello";
	int j=0;
	int words_matched=0;

	for(int i=0; i<s.size(); i++)
	{
		if(s[i]==temp[j])
		{
			j++;
			words_matched++;
		}
	}
	if(words_matched==5)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
return 0;
}
