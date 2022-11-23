// A. Amusing Joke codeforces soln
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s1, s2, shuffled;

	cin >> s1 >> s2;
	cin >> shuffled;

	string temp = s1.append(s2);

	sort(shuffled.begin(), shuffled.end());
	sort(temp.begin(), temp.end());

		if(temp==shuffled)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}

return 0;
}
