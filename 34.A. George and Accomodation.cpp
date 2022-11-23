// A. George and Accommodation codeforces soln
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int p, q;
	int count = 0;

	cin >> n;

	while(n--)
	{
		cin >> p >> q;

		if(p==q)
			continue;
		else if(p<q)
		{
			if(p<=(q-2))
			{
				count++;
			}
		}
	}

		cout << count << endl;

return 0;
}
