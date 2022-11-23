#include<bits/stdc++.h>
#define I int one=0, two=0, three=0
#define S string s
using namespace std;
int main()
{
	I;
	S;

	cin >> s;

for(int i=0; i<s.size(); i+=2)
	{
		if(s[i]=='1')
			one++;

		else if(s[i]=='2')
			two++;

		else if(s[i]=='3')
			three++;
	}

int total = one+two+three;

for(int i=0; i<total; i++)
	{
		if(one>0)
		{
			cout << "1";
			one--;
		}
		else if(two>0)
		{
			cout << "2";
			two--;
		}
		else if(three>0)
		{
			cout << "3";
			three--;
		}
		if(i<(total-1))
		{
			cout << "+";
		}
	}
return 0;
}
