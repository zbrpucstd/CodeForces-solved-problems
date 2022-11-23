// B. Drinks codeforces soln
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	double sum = 0;

	cin >> n;

	double arr[n];

	for(int i=0; i<n; i++)
	{
		cin >> arr[i];

		sum += arr[i];
	}
	double ans = sum/n;

	cout << fixed << showpoint;
	cout << setprecision(12) << ans << endl;

return 0;
}
