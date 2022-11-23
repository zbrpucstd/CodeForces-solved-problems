// A. Anton and Danik codeforces soln
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int anton = 0;
	int danik = 0;
	char ch[100000];

	cin >> n;

	for(int i=0; i<n; i++)
	{
		cin >> ch[i];

		if(ch[i]=='A')
			anton++;
		else if(ch[i]=='D')
			danik++;
	}

		if(anton>danik)
			cout << "Anton" << endl;
		else if(anton<danik)
			cout << "Danik" << endl;
		else if(anton==danik)
			cout << "Friendship" << endl;

return 0;
}
