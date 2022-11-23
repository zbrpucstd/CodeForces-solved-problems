// A. Bit++ codeforces soln
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int x=0;
	string s;
	cin >>n;
while(n--)
{
	cin >> s;
	int temp = s.size();
	if(s[0]=='+' || s[temp-1]=='+')
		x++;
	else if(s[0]=='-' || s[temp-1]=='-')
		x--;
}
cout << x << endl;
return 0;
}
