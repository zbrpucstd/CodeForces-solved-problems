// A. Is your horseshoe on the other hoof? codeforces soln
#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> v;
	int count = 0;

	for(int i=0; i<4; i++)
	{
		int x;
		cin >> x;

		v.push_back(x);
	}

	sort(v.begin(), v.end());

	for(int i=0; i<3; i++)
	{
		if(v[i]==v[i+1])
		{
			count++;
		}
	}

	cout << count << endl;

return 0;
}
