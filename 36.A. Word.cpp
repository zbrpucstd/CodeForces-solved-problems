// A. Word codeforces soln
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int upper=0;
	int lower=0;

	cin >> s;

	for(int i=0; i<s.size(); i++)
	{
		if(s[i]>=65 && s[i]<=90)
		{
			upper++;
		}
		else if(s[i]>=97 && s[i]<=122)
		{
			lower++;
		}
	}
		if(upper>lower)
		{
			transform(s.begin(), s.end(), s.begin(), ::toupper);
			cout << s << endl;
		}
		else if(upper<lower)
		{
			transform(s.begin(), s.end(), s.begin(), ::tolower);
			cout << s << endl;
		}
		else if(upper==lower)
		{
			transform(s.begin(), s.end(), s.begin(), ::tolower);
			cout << s << endl;
		}

return 0;
}
