// A. Candies and Two Sisters codeforces soln
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	int n;

	cin >> t;

	for(int i=0; i<t; i++)
	{
		cin >> n;

		if(n==1)
		{
			cout << "0" << endl;
		}
		else if(n==2)
		{
			cout << "0" << endl;
		}
		else
		{
			int temp = (n-1)/2;

			cout << temp << endl;
		}
	}

return 0;
}
