#include<bits/stdc++.h>
using namespace std;
int main()
{
	const int num=15;
	const int prime[num] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
	int n, m;
	cin >> n >> m;
	bool output=0;
	for(int i=0; i<num-1; i++)
	{
		if(n==prime[i] && m==prime[i+1])
			output=1;
	}
	output ? cout << "YES" << endl : cout << "NO" << endl;
return 0;
}
