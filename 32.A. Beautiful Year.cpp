// A. Beautiful Year codeforces soln
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int y;

	cin >> y;

	int temp = y;

	while(temp++)
	{
		int one = temp/1000;
		int two = (temp/100)%10;
		int three = (temp/10)%10;
		int four = temp%10;

		if(one!=two && two!=three && three!=four && four!=one && one!=three && two!=four)
		{
			cout << temp << endl;
			break;
		}
	}

return 0;
}
