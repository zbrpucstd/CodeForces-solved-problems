#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	int count=0, i=1;
for(;;)
{
	if(n-i==0) break;
	if(m-i==0) break;
	i++;
	count++;
}
if(count%2==0)
{
	cout << "Akshat" << endl;
}
else
	cout << "Malvika" << endl;
	return 0;
}
