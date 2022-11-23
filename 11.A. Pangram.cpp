// A. Pangram codeforces soln
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int n;
	int count = 0;

	cin >> n;
	cin >> s;

		transform(s.begin(), s.end(), s.begin(), :: tolower);
		sort(s.begin(), s.end());

	for(int i=0; i<n; i++)
	{
		if(s[i]!=s[i+1])
		{
			count++;
		}
	}

		if(count==26)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}

return 0;
}
