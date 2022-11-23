// B. Xenia and Ringroad codeforces soln
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	int n, m;
	vector<int> v;

	cin >> n >> m;

	for(int i=0; i<m; i++)
	{
		int x;
		cin >> x;

		v.push_back(x);
	}

	ll total_time = v[0] - 1;

	for(int i=0; i<m-1; i++)
	{
		if(v[i]>v[i+1])
		{
			total_time += n - (v[i]-v[i+1]);
		}
		else if(v[i]<v[i+1])
		{
			total_time += (v[i+1] - v[i]);
		}
	}

	cout << total_time << endl;

return 0;
}
