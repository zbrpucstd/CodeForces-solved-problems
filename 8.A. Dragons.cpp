// A. Dragons codeforces soln
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int s, n;
	pair<int, int> a[10000];
	int flag = 0;

	cin >> s >> n;

	for(int i=0; i<n; i++)
	{
		cin >> a[i].first >> a[i].second;
	}

	sort(a, a+n);

	for(int i=0; i<n; i++)
	{
		if(s<=a[i].first)
		{
			flag = 1;
			break;
		}
		else
		{
			s += a[i].second;
		}
	}

	if(flag==1)
	{
		cout << "NO" << endl;
	}
	else
	{
		cout << "YES" << endl;
	}

return 0;
}
