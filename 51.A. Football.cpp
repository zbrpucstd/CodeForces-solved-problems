// A. Football codeforces soln
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int count=1;
	cin >> s;

	for(int i=0; i<s.size(); i++)
	{
		count += 1;
		if(s[i]==s[i+1])
			{
				if(count==7)
					{
						cout << "YES" << endl;
						return 0;
					}
			}
		else
			{
				count = 1;
			}
	}
	cout << "NO" << endl;
	return 0;
}
