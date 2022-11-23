// A. Nearly Lucky Number codeforces soln
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	string n;
	int count=0;

	cin >> n;

	for(int i=0; i<n.size(); i++)
	{
		if(n[i]=='7' || n[i]=='4')
		{
			count++;
		}
	}
		if(count==4 || count==7)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}

return 0;
}
