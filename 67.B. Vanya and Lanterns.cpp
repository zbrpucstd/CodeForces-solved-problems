#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	int m=0;
	int arr[a];
for(int i=0; i<a; i++)
{
	cin >> arr[i];
}
sort(arr,arr+a);
for(int i=0; i<a-1; i++)
{
	if(arr[i+1]-arr[i]>m)
	{
		m = arr[i+1]-arr[i];
	}
}
double x = arr[0];
double y = (double)m/2;
double ans  = max(x,y);
double z = b - arr[a-1];
ans  = max(z,ans);
cout << fixed << showpoint;
cout << setprecision(10) << ans << endl;
return 0;
}
