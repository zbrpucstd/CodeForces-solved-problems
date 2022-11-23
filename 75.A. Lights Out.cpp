#include<bits/stdc++.h>
using namespace std;
int pressed[4][4];
int toggle[4][4];
int i;
int j;
int main()
{
for(i=1; i<=3; i++)
{
	for(j=1; j<=3; j++)
	{
		cin >> pressed[i][j];
		toggle[i][j] = pressed[i][j];
	}
}
for(i=1; i<=3; i++)
{
	for(j=1; j<=3; j++)
	{
		if(pressed[i][j]!=0)
		{
			toggle[i][j-1] += pressed[i][j];
			toggle[i][j+1] += pressed[i][j];
			toggle[i-1][j] += pressed[i][j];
			toggle[i+1][j] += pressed[i][j];
		}
	}
}
for(i=1; i<=3; i++)
{
	for(j=1; j<=3; j++)
	{
		if(toggle[i][j]%2)
			cout << "0";
		else
			cout << "1";
	}
	cout << endl;
}
return 0;
}
