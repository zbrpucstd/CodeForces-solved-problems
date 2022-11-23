// A. Calculating Function codeforces soln
#include<bits/stdc++.h>
#define LL long long
using namespace std;
int main()
{
	LL n;

	cin >> n;

	if(n%2!=0)
	{
		LL odd = (n/2)+1;
		 odd *= (-1);

		cout << odd << endl;
	}
	else if(n%2==0)
	{
		LL even = (n/2);

		cout << even << endl;
	}

return 0;
}
