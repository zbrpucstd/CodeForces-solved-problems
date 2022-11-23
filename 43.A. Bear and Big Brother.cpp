// A. Bear and Big Brother codeforces soln
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int limak, bob;
	int count=1;

	cin >> limak >> bob;

	while(1)
		{
			limak *= 3;
			bob *= 2;

			if(limak>bob)
				{
					break;
				}
			count++;
		}

	cout << count << endl;

return 0;
}
