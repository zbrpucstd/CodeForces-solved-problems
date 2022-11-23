// A. Divisibility Problem codeforces soln
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	int a, b;
	int mod = 0;
	int moves = 0;

	cin >> t;

	while(t--)
	{
		cin >> a >> b;

		mod = a%b;

		if(mod==0)
		{
			cout << mod << endl;
		}
		else if(mod!=0)
		{
			moves = b - mod;

			cout << moves << endl;
		}
	}

return 0;
}
