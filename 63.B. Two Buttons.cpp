#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
if(n>=m)
{
	cout << abs(n-m) << endl;
}
else
{
	int count=0;
	while(m>n)
	{
		if(m%2==0)
		{
			m/=2;
			count++;
		}
		else
		{
			m+=1;
			count++;
		}
	}
			cout << count+(abs(n-m)) << endl;
}
return 0;
}
