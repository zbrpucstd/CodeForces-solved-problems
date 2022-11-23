// A. Games codeforces soln
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	int count = 0;

	cin >> t;

	int home[t];
	int guest[t];

	for(int i=0; i<t; i++)
	{
		cin >> home[i];
		cin >> guest[i];
	}

	for(int i=0; i<t; i++)
	{
		for(int j=0; j<t; j++)
		{
			if(home[i]==guest[j])
				count++;
		}
	}

	cout << count << endl;

return 0;
}
