// A. I_love_%username% codeforces soln
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, count=0;

	cin >> n;

	int arr[n];

	for(int i=0; i<n; i++)
	{
		cin >> arr[i];
	}

	int max_amaze = arr[0];
	int min_amaze = arr[0];

	for(int i=0; i<n; i++)
	{
		if(arr[i]>max_amaze)
		{
			max_amaze = arr[i];
			count++;
		}
		else if(arr[i]<min_amaze)
		{
			min_amaze = arr[i];
			count++;
		}
	}

		cout << count << endl;

return 0;
}
