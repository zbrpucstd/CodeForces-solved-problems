#include<bits/stdc++.h>
using namespace std;
int main()
{
long long a, b, c=0;
cin >> a >> b;
if(a%2==0)
{
	c = a/2;
}
else
{
	c = (a+1)/2;
}

if(b<=c)
{
	cout << (b*2)-1 << endl;
}
else
{
	cout << (b-c)*2 << endl;
}
}
