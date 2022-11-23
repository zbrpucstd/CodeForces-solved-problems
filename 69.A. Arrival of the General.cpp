#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int arr[n], mi=101, maxi=0, ma=0, mini=0;
	for(int i=0; i<n; i++)
	{
		cin >> arr[i];
	if(arr[i]>ma)
	{
		ma = arr[i];
		maxi = i;
	}
	if(arr[i]<=mi)
	{
		mi = arr[i];
		mini = i;
	}
	}
	if(maxi>mini)
	{
		mini++;
	}
	cout << maxi+(n-1)-mini << endl;
	return 0;
}
