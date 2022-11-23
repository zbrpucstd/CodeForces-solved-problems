// A. Anton and Letters codeforces soln
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int count = 0;

	getline(cin, s);

	sort(s.begin(), s.end());

	int len = s.size();

	for(int i=0; i<len-2; i++)
	{
		if((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122))
		{
			if(s[i]!=s[i+1])
			{
				count++;
			}
		}
	}

	cout << count << endl;

return 0;
}
