// A. Tram codeforces soln
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	int out, in;
	int passenger=0, maximum=0;

	cin >> t;

	while(t--)
		{
			cin >> out >> in;

			passenger -= out;
			passenger += in;
			maximum = max(passenger, maximum);
		}

	cout << maximum << endl;

return 0;
}
