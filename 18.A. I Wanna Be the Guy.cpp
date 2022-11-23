// A. I Wanna Be the Guy codeforces soln
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	vector<int> v;
	int p, q, count=0;

	cin >> n >> p;

	for(int i=0; i<p; i++)
	{
		int x;
		cin >> x;

		v.push_back(x);
	}

	cin >> q;

	for(int i=p; i<(p+q); i++)
	{
		int x;
		cin >> x;

		v.push_back(x);
	}

	sort(v.begin(), v.end());

	for(int i=0; i<(p+q); i++)
	{
		if(v[i]!=v[i+1])
			count++;
	}

	if(count==n)
		cout << "I become the guy." << endl;
	else
		cout << "Oh, my keyboard!" << endl;

	v.clear();

return 0;
}
