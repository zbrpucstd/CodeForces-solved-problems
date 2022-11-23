// A. Stones on the Table codeforces soln
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	string s;
	int i=0, count=0;
	cin >> t;
while(t--)
	{
		cin >> s;
		if(s[i]==s[i+1])
		{
			count++;
		}
		i++;
	}
	cout << count << endl;
return 0;
}
