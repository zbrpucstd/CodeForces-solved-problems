// A. Next Round codeforces soln
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, k;
	vector<int> v;
	int count=0;
cin >> n >> k;
for(int i=0; i<n; i++)
{
	int x;
	cin >> x;
v.push_back(x);
}
for(int i=0; i<n; i++)
{
	if(v[i]>=v[k-1] && v[i]>0)
	{
		count++;
	}
}
cout << count << endl;
v.clear();
return 0;
}
