// A. Translation codeforces soln
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s, t;

	cin >> s >> t;

	reverse(t.begin(), t.end());

	if(s==t)
	{
		cout << "YES" << endl;
	}
	else if(s!=t)
	{
		cout << "NO" << endl;
	}

return 0;
}
