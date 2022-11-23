// A. Soldier and Bananas codeforces soln
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k, n, w;

	cin >> k >> n >> w;

	int i=2;
	int temp = w-1;
	int dollars = k;

	while(temp--)
	{
		dollars += k * i;
		i++;
	}

	int borrow = (dollars - n);

	if(borrow<0)
		cout << "0" << endl;
	else
		cout << borrow << endl;

return 0;
}
