// A. Expression codeforces soln
#include<bits/stdc++.h>
using namespace std;
int max(int a, int b, int c, int d, int e);
int main()
{
	int a, b, c;

	cin >> a >> b >> c;

	int calc_1 = a+(b*c);
	int calc_2 = a*(b+c);
	int calc_3 = a*b*c;
	int calc_4 = (a+b)*c;
	int calc_5 = (a+b+c);

	int maximum = max(calc_1, calc_2, calc_3, calc_4, calc_5);

	cout << maximum << endl;

return 0;
}
int max(int a, int b, int c, int d, int e)
{
	if(a>b && a>c && a>d && a>e)
		return a;
	else if(b>a && b>c && b>d && b>e)
		return b;
	else if(c>a && c>b && c>d && c>e)
		return c;
	else if(d>a && d>b && d>c && d>e)
		return d;
	else if(e>a && e>b && e>c && e>d)
		return e;
}
