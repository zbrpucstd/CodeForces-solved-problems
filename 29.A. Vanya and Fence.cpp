// A. Vanya and Fence codeforces soln
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int l, h;
	int road = 0;

	cin >> l >> h;

	int n[l];

	for(int i=0; i<l; i++)
	{
		cin >> n[i];

		if(n[i]>h)
		{
			road += 2;
		}
		else
		{
			road += 1;
		}
	}

	cout << road << endl;

return 0;
}
