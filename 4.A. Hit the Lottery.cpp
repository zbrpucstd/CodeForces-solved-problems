// A. Hit the Lottery codeforces soln
#include<bits/stdc++.h>
#define ull unsigned long long
using namespace std;
int main()
{
	ull n, no_of_bills = 0, remaining_money = 0, money = 0;

	cin >> n;

	money = n;

	//	For 100 tk
	remaining_money = money%100;
	no_of_bills += money/100;
	money = remaining_money;

	// For 20 tk
	remaining_money = money%20;
	no_of_bills += money/20;
	money = remaining_money;

	// For 10 tk
	remaining_money = money%10;
	no_of_bills += money/10;
	money = remaining_money;

	// For 5 tk;
	remaining_money = money%5;
	no_of_bills += money/5;
	money = remaining_money;

	// For 1 tk;
	no_of_bills += money/1;

	cout << no_of_bills << endl;

return 0;
}
