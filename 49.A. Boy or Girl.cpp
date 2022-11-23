// A. Boy or Girl codeforces soln
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int count=1;

	cin >> s;

	int len = s.size();
	sort(s.begin(), s.end());

	for(int i=0; i<len-1; i++)
	{
		if(s[i]!=s[i+1])
		{
			count++;
		}
	}
	if(count%2==1)
		{
			cout << "IGNORE HIM!" << endl;
		}
	else
		{
			cout << "CHAT WITH HER!" << endl;
		}

	return 0;
}
