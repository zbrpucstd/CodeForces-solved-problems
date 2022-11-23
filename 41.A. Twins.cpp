#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	vector<int> v;
	int total_coins = 0, min_coins=0, count=0;

	cin >> t;

	for(int i=0; i<t; i++)
	{
		int x;
		cin >> x;
		v.push_back(x);
		total_coins += v[i];
	}
	sort(v.begin(), v.end());
	total_coins /= 2;

	for(int i=t-1; i>=0; i--)
	{
		min_coins += v[i];
		count++;

		if(total_coins<min_coins)
			break;
	}

	cout << count << endl;

return 0;
}
