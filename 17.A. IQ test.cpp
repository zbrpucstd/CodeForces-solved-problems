// A. IQ test codeforces soln
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	vector<int> v;
	int odd = 0, even = 0;

	cin >> n;

	for(int i=0; i<n; i++)
	{
		int x;
		cin >> x;

		v.push_back(x);

		if(v[i]%2==0)
		{
			even++;
		}
		else if(v[i]%2!=0)
		{
			odd++;
		}
	}

		if(even<odd)
		{
			for(int i=0; i<n; i++)
			{
				if(v[i]%2==0)
				{
					cout << i+1;
					break;
				}
			}
		}
		else
		{
			for(int i=0; i<n; i++)
			{
				if(v[i]%2!=0)
				{
					cout << i+1;
					break;
				}
			}
		}

return 0;
}
