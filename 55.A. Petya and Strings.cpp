// A. Petya and Strings codeforces soln
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a, b;
cin >> a >> b;
int temp = a.size();
transform(a.begin(), a.end(), a.begin(), :: tolower);
transform(b.begin(), b.end(), b.begin(), :: tolower);

	if(a==b)
	{
		cout << "0" << endl;
	}
	else
	{
		for(int i=0; i<temp; i++)
		{
			if(a[i]>b[i])
			{
				cout << "1" << endl;
				break;
			}
			else if(a[i]<b[i])
			{
				cout << "-1" << endl;
				break;
			}
		}
	}
return 0;
}
