// A. Ultra-Fast Mathematician codeforces soln
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s1;
	string s2;

	cin >> s1 >> s2;

	for(int i=0; i<s1.size(); i++)
	{
		if(s1[i]=='0' && s2[i]=='1' || s2[i]=='0' && s1[i]=='1')
			cout << "1";
		else if(s1[i]='0' && s2[i]=='0' || s1[i]=='1' && s2[i]=='1')
			cout << "0";
	}

return 0;
}
