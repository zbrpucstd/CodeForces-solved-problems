#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a, b;

	cin >> a >> b;

	if(a>b)
		cout << b << " ";
	else
		cout << a << " ";

	int difference = abs(a-b);

	cout << difference/2 << endl;

return 0;
}
