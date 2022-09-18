#include<bits/stdc++.h>
using namespace std;

void pyramidPattern(int n) {


	for (int i = 1; i <= n; i++)
	{
		for(int j=n-i; j>=1; j--) {
			cout << " ";
		}
		for (int k = 1; k <= i*2-1; k++)
		{
			cout << "*" << " ";
		}
		cout << endl;
	}
}

int main()
{
	
	int n; cin >> n;
	pyramidPattern(n);

	return 0;
}