// A. Young Physicist codeforces soln
#include<bits/stdc++.h>
#define TEMP int temp_a=0, temp_b=0, temp_c=0
using namespace std;
int main()
{
	int t, a, b, c;
	TEMP;

	cin >> t;

	while(t--)
	{
		cin >> a >> b >> c;

		temp_a += a;
		temp_b += b;
		temp_c += c;
	}
	if(temp_a==0 && temp_b==0 && temp_c==0)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
return 0;
}
