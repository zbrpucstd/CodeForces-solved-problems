// A. cAPS lOCK codeforces soln
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int count_lower = 0;
	int count_upper = 0;

	cin >> s;

	for(int i=1; i<=s.size(); i++)
	{
		if(islower(s[i]))
		{
			count_lower++;
		}
	}

	for(int i=0; i<s.size(); i++)
	{
		if(isupper(s[i]))
		{
			count_upper++;
		}
	}

		if(islower(s[0]) && count_lower==0)
		{
			s[0] = toupper(s[0]);

			for(int i=1; i<=s.size(); i++)
			{
				s[i] = tolower(s[i]);
			}

				cout << s << endl;
				return 0;
		}

		if(count_upper==s.size())
		{
			for(int i=0; i<s.size(); i++)
			{
				s[i] = tolower(s[i]);
			}
			cout << s << endl;
		}
		else
		{
			cout << s << endl;
		}

return 0;
}
