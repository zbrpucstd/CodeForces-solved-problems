// A. Magnets codeforces soln
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	int group = 0;

	cin >> t;

	int arr[t];

	for(int i=0; i<t; i++)
	{
		cin >> arr[i];
	}

	for(int i=0; i<t; i++)
	{
		if(arr[i]!=arr[i+1])
		{
			group++;
		}

	}

	cout << group << endl;

return 0;
}
