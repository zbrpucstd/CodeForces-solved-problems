#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t, a, b, c;
	int count=0;
	cin >> t;
while(t--)
{
	cin >> a >> b >> c;
	int temp = (a+b+c);
if(temp==2 || temp==3)
	count++;
}
cout << count << endl;
return 0;
}
