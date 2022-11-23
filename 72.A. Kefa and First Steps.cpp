#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	int a[t], cnt=0, m=1;
for(int i=0; i<t; i++)
{
	cin >> a[i];
	if(a[i]>=a[i-1])
	{
		cnt++;
		m=max(m,cnt);
	}
	else
	{
		cnt=1;
	}
}
cout << m << endl;
return 0;
}
