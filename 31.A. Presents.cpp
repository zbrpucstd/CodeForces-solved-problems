// A. Presents codeforces soln
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;

	cin >> n;

	int p[n];

	for(int i=0; i<n; i++)
	{
		cin >> p[i];
	}

	for(int i=1; i<=n; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(p[j]==i)
			{
				cout << j+1 << " ";
			}
		}
	}

return 0;
}
