// A. In Search of an Easy Problem codeforces soln
#include<bits/stdc++.h>
#define UI unsigned int
using namespace std;
int main()
{
	UI t;
	UI n;
	UI flag = 0;

	cin >> t;

	while(t--)
	{
		cin >> n;

		if(n==1)
		{
			flag=1;
		}
	}

		if(flag==1)
		{
			cout << "HARD" << endl;
		}
		else
		{
			cout << "EASY" << endl;
		}

return 0;
}
