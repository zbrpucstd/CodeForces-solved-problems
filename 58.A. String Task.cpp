#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
cin >> s;
transform(s.begin(), s.end(), s.begin(), :: tolower);
int len = s.size();
for(int i=0; i<len; i++)
{
if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='Y'||s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y')
{
	continue;
}
else
{
	cout << "." << s[i];
}
}
return 0;
}
